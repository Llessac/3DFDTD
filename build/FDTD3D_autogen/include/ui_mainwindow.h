/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtOpenGLWidgets/QOpenGLWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actions;
    QAction *action1;
    QAction *action2;
    QAction *action3;
    QAction *action4;
    QAction *action5;
    QAction *action6;
    QAction *action7;
    QAction *action8;
    QAction *action1_2;
    QAction *action2_2;
    QAction *action3_2;
    QAction *actionPML;
    QAction *action1_3;
    QAction *action2_3;
    QAction *action2_4;
    QAction *action1_5;
    QAction *action2_5;
    QAction *action1_6;
    QAction *action2_6;
    QWidget *centralwidget;
    QOpenGLWidget *openGLWidget;
    QToolBox *toolBox;
    QWidget *tool1;
    QListWidget *listWidget;
    QWidget *tool2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tool3;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QTextEdit *textEdit;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_V;
    QMenu *menu_S;
    QMenu *menu_D;
    QMenu *menu_H;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1060, 641);
        actions = new QAction(MainWindow);
        actions->setObjectName("actions");
        action1 = new QAction(MainWindow);
        action1->setObjectName("action1");
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        action3 = new QAction(MainWindow);
        action3->setObjectName("action3");
        action4 = new QAction(MainWindow);
        action4->setObjectName("action4");
        action5 = new QAction(MainWindow);
        action5->setObjectName("action5");
        action6 = new QAction(MainWindow);
        action6->setObjectName("action6");
        action7 = new QAction(MainWindow);
        action7->setObjectName("action7");
        action8 = new QAction(MainWindow);
        action8->setObjectName("action8");
        action1_2 = new QAction(MainWindow);
        action1_2->setObjectName("action1_2");
        action2_2 = new QAction(MainWindow);
        action2_2->setObjectName("action2_2");
        action3_2 = new QAction(MainWindow);
        action3_2->setObjectName("action3_2");
        actionPML = new QAction(MainWindow);
        actionPML->setObjectName("actionPML");
        action1_3 = new QAction(MainWindow);
        action1_3->setObjectName("action1_3");
        action2_3 = new QAction(MainWindow);
        action2_3->setObjectName("action2_3");
        action2_4 = new QAction(MainWindow);
        action2_4->setObjectName("action2_4");
        action1_5 = new QAction(MainWindow);
        action1_5->setObjectName("action1_5");
        action2_5 = new QAction(MainWindow);
        action2_5->setObjectName("action2_5");
        action1_6 = new QAction(MainWindow);
        action1_6->setObjectName("action1_6");
        action2_6 = new QAction(MainWindow);
        action2_6->setObjectName("action2_6");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(350, 0, 711, 561));
        toolBox = new QToolBox(centralwidget);
        toolBox->setObjectName("toolBox");
        toolBox->setGeometry(QRect(20, 10, 281, 551));
        tool1 = new QWidget();
        tool1->setObjectName("tool1");
        listWidget = new QListWidget(tool1);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 0, 256, 411));
        toolBox->addItem(tool1, QString::fromUtf8("\347\273\223\346\236\204"));
        tool2 = new QWidget();
        tool2->setObjectName("tool2");
        tabWidget = new QTabWidget(tool2);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 271, 411));
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        toolBox->addItem(tool2, QString::fromUtf8("\350\276\271\347\225\214\346\235\241\344\273\266"));
        tool3 = new QWidget();
        tool3->setObjectName("tool3");
        tabWidget_2 = new QTabWidget(tool3);
        tabWidget_2->setObjectName("tabWidget_2");
        tabWidget_2->setGeometry(QRect(0, 0, 271, 101));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        textEdit = new QTextEdit(tab_4);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 0, 104, 31));
        label = new QLabel(tab_4);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 71, 20));
        label_2 = new QLabel(tab_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 71, 20));
        textEdit_2 = new QTextEdit(tab_4);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(80, 40, 104, 31));
        tabWidget_2->addTab(tab_4, QString());
        label_3 = new QLabel(tool3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 71, 20));
        textEdit_3 = new QTextEdit(tool3);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(80, 110, 104, 31));
        toolBox->addItem(tool3, QString::fromUtf8("\345\205\211\346\272\220"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1060, 22));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        menu_S = new QMenu(menubar);
        menu_S->setObjectName("menu_S");
        menu_D = new QMenu(menubar);
        menu_D->setObjectName("menu_D");
        menu_H = new QMenu(menubar);
        menu_H->setObjectName("menu_H");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_V->menuAction());
        menubar->addAction(menu_S->menuAction());
        menubar->addAction(menu_D->menuAction());
        menubar->addAction(menu_H->menuAction());
        menu_F->addAction(action1);
        menu_F->addAction(action2);
        menu_F->addAction(action3);
        menu_F->addAction(action4);
        menu_F->addSeparator();
        menu_F->addAction(action5);
        menu_F->addAction(action6);
        menu_F->addAction(action7);
        menu_F->addSeparator();
        menu_F->addAction(action8);
        menu_S->addAction(action1_3);
        menu_S->addAction(action2_3);
        menu_H->addAction(action1_6);
        menu_H->addAction(action2_6);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3DFDTD", nullptr));
        actions->setText(QCoreApplication::translate("MainWindow", "s ", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\351\241\271\347\233\256", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        action3->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        action4->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272", nullptr));
        action5->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260", nullptr));
        action6->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210", nullptr));
        action7->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\350\256\276\347\275\256", nullptr));
        action8->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        action1_2->setText(QCoreApplication::translate("MainWindow", "\345\234\206\346\237\261\344\275\223", nullptr));
        action1_2->setIconText(QCoreApplication::translate("MainWindow", "\345\234\206\346\237\261\344\275\223", nullptr));
#if QT_CONFIG(tooltip)
        action1_2->setToolTip(QCoreApplication::translate("MainWindow", "\345\234\206\346\237\261\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        action2_2->setText(QCoreApplication::translate("MainWindow", "\351\225\277\346\226\271\344\275\223", nullptr));
        action3_2->setText(QCoreApplication::translate("MainWindow", "\347\220\203\344\275\223", nullptr));
        actionPML->setText(QCoreApplication::translate("MainWindow", "PML", nullptr));
        action1_3->setText(QCoreApplication::translate("MainWindow", "\345\234\272\345\200\274\345\217\226\346\240\267", nullptr));
        action2_3->setText(QCoreApplication::translate("MainWindow", "\351\200\217\345\260\204\345\217\226\346\240\267", nullptr));
        action2_4->setText(QCoreApplication::translate("MainWindow", "\351\200\217\350\277\207\347\216\207\345\210\206\346\236\220", nullptr));
        action1_5->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\240\267\347\202\271\347\232\204\345\210\206\346\236\220", nullptr));
        action2_5->setText(QCoreApplication::translate("MainWindow", "\345\217\226\346\240\267\351\235\242\347\232\204\345\210\206\346\236\220", nullptr));
        action1_6->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\2163DFDTD", nullptr));
        action2_6->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\346\211\213\345\206\214", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "\351\225\277\346\226\271\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\234\206\346\237\261\344\275\223", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "\347\220\203\344\275\223", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        toolBox->setItemText(toolBox->indexOf(tool1), QCoreApplication::translate("MainWindow", "\347\273\223\346\236\204", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "PML", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "...", nullptr));
        toolBox->setItemText(toolBox->indexOf(tool2), QCoreApplication::translate("MainWindow", "\350\276\271\347\225\214\346\235\241\344\273\266", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\345\215\225\351\242\221\345\205\211\346\272\220", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">5e-015</p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\345\263\260\345\200\274\346\227\266\351\227\264/s\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\350\204\211\345\256\275/s\357\274\232", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1e-014</p></body></html>", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\350\260\203\345\210\266\351\253\230\346\226\257\345\205\211\346\272\220", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\263\242\351\225\277/\316\274m\357\274\232", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1e-014</p></body></html>", nullptr));
        toolBox->setItemText(toolBox->indexOf(tool3), QCoreApplication::translate("MainWindow", "\345\205\211\346\272\220", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(F)", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\230\276\347\244\272(V)", nullptr));
        menu_S->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256(S)", nullptr));
        menu_D->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223(D)", nullptr));
        menu_H->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(H)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
