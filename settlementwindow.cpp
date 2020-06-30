#include "settlementwindow.h"
#include "ui_settlementwindow.h"

SettlementWindow::SettlementWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettlementWindow)
{
    ui->setupUi(this); 
}

SettlementWindow::~SettlementWindow()
{
    delete ui;
}
void SettlementWindow::setScore(int score){
    this->score=score;
}
void SettlementWindow::setMaxCombos(int maxCombos){
    this->maxCombos=maxCombos;
}
void SettlementWindow::on_pushButton_clicked()
{
    this->hide();
}
