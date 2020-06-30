#include "rank.h"
#include "ui_rank.h"

rank::rank(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rank)
{
    ui->setupUi(this);
}

rank::~rank()
{
    delete ui;
}

void rank::on_pushButton_clicked()
{
    this->hide();
}
