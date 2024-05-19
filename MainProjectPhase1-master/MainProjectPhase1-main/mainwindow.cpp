#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secondpage.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setMaximumSize(1071,600);
    setMinimumSize(1071,600);
    ui->textEdit_2->setReadOnly(true);
    ui->textEdit_3->setReadOnly(true);
    ui->textEdit_4->setReadOnly(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    secondPage *w2 = new secondPage;
    w2->setWindowTitle("secondPage");
    w2->show();
}

