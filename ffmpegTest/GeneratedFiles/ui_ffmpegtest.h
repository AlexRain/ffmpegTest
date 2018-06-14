/********************************************************************************
** Form generated from reading UI file 'ffmpegtest.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEGTEST_H
#define UI_FFMPEGTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ffmpegTestClass
{
public:

    void setupUi(QWidget *ffmpegTestClass)
    {
        if (ffmpegTestClass->objectName().isEmpty())
            ffmpegTestClass->setObjectName(QStringLiteral("ffmpegTestClass"));
        ffmpegTestClass->resize(600, 400);

        retranslateUi(ffmpegTestClass);

        QMetaObject::connectSlotsByName(ffmpegTestClass);
    } // setupUi

    void retranslateUi(QWidget *ffmpegTestClass)
    {
        ffmpegTestClass->setWindowTitle(QApplication::translate("ffmpegTestClass", "ffmpegTest", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ffmpegTestClass: public Ui_ffmpegTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEGTEST_H
