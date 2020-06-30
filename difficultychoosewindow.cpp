#include "difficultychoosewindow.h"
#include "ui_difficultychoosewindow.h"

DifficultyChooseWindow::DifficultyChooseWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DifficultyChooseWindow)
{
    ui->setupUi(this);
}

DifficultyChooseWindow::~DifficultyChooseWindow()
{
    delete ui;
    delete pPlayWindow1;
    delete pPSettlementWindow;
}




void DifficultyChooseWindow::on_QBtnExit_clicked()
{
    this->close();
}



void DifficultyChooseWindow::on_QBtnDifficult_clicked()
{
    //困难模式的参数设置
    bool gameOver=false;
    levelFlag=3;
    pPlayWindow1->setLevelFalg(levelFlag);
    pPlayWindow1->show();
    pPlayWindow1->game();
    pPlayWindow1->exec();
    this->score=pPlayWindow1->getSocre();
    this->maxCombos=pPlayWindow1->getMaxCombos();
    gameOver = pPlayWindow1->getGameOver();
    if(!gameOver){
        pPSettlementWindow->show();
        pPSettlementWindow->exec();
    }
    this->show();
}

void DifficultyChooseWindow::on_QBtnMedium_clicked()
{
    //中等难度的参数设置
    levelFlag=2;
    bool gameOver=false;
    pPlayWindow1->setLevelFalg(levelFlag);
    pPlayWindow1->show();
    pPlayWindow1->game();
    pPlayWindow1->exec();
    this->score=pPlayWindow1->getSocre();
    this->maxCombos=pPlayWindow1->getMaxCombos();
    gameOver = pPlayWindow1->getGameOver();
    if(!gameOver){
        pPSettlementWindow->show();
        pPSettlementWindow->exec();
    }
    this->show();
}

void DifficultyChooseWindow::on_QBtnSimple_clicked()
{
    //简单模式的参数设置
    levelFlag=1;
    bool gameOver=false;
    pPlayWindow1->setLevelFalg(levelFlag);
    pPlayWindow1->show();
    pPlayWindow1->game();
    pPlayWindow1->exec();
    this->score=pPlayWindow1->getSocre();
    this->maxCombos=pPlayWindow1->getMaxCombos();
    gameOver = pPlayWindow1->getGameOver();
    if(!gameOver){
        pPSettlementWindow->show();
        pPSettlementWindow->exec();
    }
    this->show();
}
