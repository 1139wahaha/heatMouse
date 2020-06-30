#include "playwindow1.h"
#include "ui_playwindow1.h"

PlayWindow1::PlayWindow1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PlayWindow1)
{
    ui->setupUi(this);
}

PlayWindow1::~PlayWindow1()
{
    delete ui;
}
void PlayWindow1::setLevelFalg(int levelFlag){
    this->levelFlag=levelFlag;
}

void PlayWindow1::on_pushButton_2_clicked()
{
    this->gameOver=true;
    close();
}
void PlayWindow1::game(){
    //根据levelFlag设置相应的数据
    //根据游戏结果设置下列数据的值
    this->score=0;
    this->maxCombos=0;
}
int PlayWindow1::getSocre(){
    return this->score;
}
int PlayWindow1::getMaxCombos(){
    return this->maxCombos;
}
bool PlayWindow1::getGameOver(){
    return gameOver;
}
