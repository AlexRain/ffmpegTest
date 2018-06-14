#ifndef FFMPEGTEST_H
#define FFMPEGTEST_H

#include <QtWidgets/QWidget>
#include "ui_ffmpegtest.h"

class ffmpegTest : public QWidget
{
    Q_OBJECT

public:
    ffmpegTest(QWidget *parent = 0);
    ~ffmpegTest();

private:
    Ui::ffmpegTestClass ui;
};

#endif // FFMPEGTEST_H
