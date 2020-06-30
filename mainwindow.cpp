#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pHelpWindow;
    delete pDifficultyChooseWindow;
    delete pLevelWindow;
    delete pRank;
}



void MainWindow::on_QBtnExit_clicked()
{
    close();
}

void MainWindow::on_QBtnHelp_clicked()
{
    this->hide();
    pHelpWindow->show();
    pHelpWindow->exec();
    this->show();
}

void MainWindow::on_QBtnCommon_clicked()
{
    this->hide();
    pDifficultyChooseWindow->show();
    pDifficultyChooseWindow->exec();
    this->show();
}

void MainWindow::on_QBtnLevels_clicked()
{
    this->hide();
    pLevelWindow->show();
    pLevelWindow->exec();
    this->show();
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    pRank->show();
    pRank->exec();
    this->show();
}
