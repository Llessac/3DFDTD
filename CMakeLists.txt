# CMake版本
cmake_minimum_required(VERSION 3.5)

# 项目名称
project(FDTD3D VERSION 0.1 LANGUAGES CXX)

# 将当前源目录CMAKE_CURRENT_SOURCE_DIR（CMakeLists.txt所在目录）及生成目录CMAKE_CURRENT_BINARY_DIR（build目录）添加到路径
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# CMake兼容QT所需要的功能
set(CMAKE_AUTOUIC ON)# UIC，由UI文件生成对应头文件ui_xxx.h
set(CMAKE_AUTOMOC ON)# MOC，信息槽相关，检测Q_OBJECT宏，生成.moc，完成信息槽相关程序
set(CMAKE_AUTORCC ON)# RCC，自动解析qrc资源文件

# 强制要求使用C++17标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 生成compile_commands.json，clangd等debug程序要用
set(DCMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
if(CMAKE_EXPORT_COMPILE_COMMANDS)
    set(CMAKE_CXX_STANDARD_INCLUDE_DIRECTORIES ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES})
endif()

# 寻找并导入QT包
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets OpenGLWidgets OpenGL LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets OpenGLWidgets OpenGL LinguistTools)

# 设置TS文件
set(TS_FILES FDTD3D_zh_CN.ts)

#添加所有的源文件
set(PROJECT_SOURCES
        main.cpp
        MainWindow/mainwindow.cpp
        View3DWidget/view3d.cpp
)

#添加所有的头文件
SET(PROJECT_HEADERS 
        MainWindow/mainwindow.h
        View3DWidget/view3d.h
)

#添加所有的ui文件
SET(PROJECT_FORMS
        MainWindow/mainwindow.ui
)

#添加资源文件
SET(PROJECT_RESOURCES 
)

#添加生成exe文件的文件
qt_add_executable(FDTD3D
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
    ${PROJECT_HEADERS}
    ${PROJECT_FORMS}
    ${PROJECT_RESOURCES}
)

#translation
qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})

#子项目（FDTD3D）链接库
target_link_libraries(FDTD3D PRIVATE Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::OpenGLWidgets Qt${QT_VERSION_MAJOR}::OpenGL)

#子项目（FDTD3D）包含FDTD3D_autogen/include目录，此目录为ui文件自动生成.h文件的目录
include_directories(FDTD3D PRIVATE "${CMAKE_BINARY_DIR}/FDTD3D_autogen/include")

#设置目标属性，前几个是MAC-OS相关
set_target_properties(FDTD3D PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

#指定安装时运行规则
install(TARGETS FDTD3D
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

#生成exe文件
qt_finalize_executable(FDTD3D)

