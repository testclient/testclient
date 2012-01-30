/********************************************************************************
** Form generated from reading UI file 'testclient.ui'
**
** Created: Sun Jan 29 21:47:45 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCLIENT_H
#define UI_TESTCLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testclientClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testclientClass)
    {
        if (testclientClass->objectName().isEmpty())
            testclientClass->setObjectName(QString::fromUtf8("testclientClass"));
        testclientClass->resize(600, 400);
        menuBar = new QMenuBar(testclientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        testclientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testclientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testclientClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testclientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        testclientClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testclientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testclientClass->setStatusBar(statusBar);

        retranslateUi(testclientClass);

        QMetaObject::connectSlotsByName(testclientClass);
    } // setupUi

    void retranslateUi(QMainWindow *testclientClass)
    {
        testclientClass->setWindowTitle(QApplication::translate("testclientClass", "testclient", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testclientClass: public Ui_testclientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCLIENT_H
