#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile file(":/DarkTheme.qss");

    if (file.open(QFile::ReadOnly | QFile::Text)) {
        QTextStream ts(&file);
        qApp->setStyleSheet(ts.readAll());  // 设置全局样式
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
