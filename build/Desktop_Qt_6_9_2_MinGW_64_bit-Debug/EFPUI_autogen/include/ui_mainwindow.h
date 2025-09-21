/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionmenu1;
    QAction *actionmenu2;
    QAction *actionmenu3;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QCheckBox *checkBox;
    QGroupBox *groupBox;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(561, 202);
        actionmenu1 = new QAction(MainWindow);
        actionmenu1->setObjectName("actionmenu1");
        actionmenu2 = new QAction(MainWindow);
        actionmenu2->setObjectName("actionmenu2");
        actionmenu3 = new QAction(MainWindow);
        actionmenu3->setObjectName("actionmenu3");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 10, 121, 41));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(140, 10, 121, 19));
        radioButton->setChecked(true);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(140, 30, 121, 19));
        checkBox->setChecked(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 60, 401, 111));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(260, 10, 151, 20));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(260, 30, 151, 20));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(420, 10, 131, 161));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 561, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionmenu1);
        menu->addSeparator();
        menu->addAction(actionmenu2);
        menu->addSeparator();
        menu->addAction(actionmenu3);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "EFPUI Qt", nullptr));
        actionmenu1->setText(QCoreApplication::translate("MainWindow", "menu1", nullptr));
        actionmenu2->setText(QCoreApplication::translate("MainWindow", "menu2", nullptr));
        actionmenu3->setText(QCoreApplication::translate("MainWindow", "menu3", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\346\214\211\351\222\256", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "\345\215\225\351\200\211", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\251", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\210\206\347\273\204\346\241\206", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "\345\215\225\351\200\2112", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\351\200\211\346\213\2512", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
