#include "levelswindow.h"
#include "ui_levelswindow.h"

LevelsWindow::LevelsWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LevelsWindow)
{
    ui->setupUi(this);
}

LevelsWindow::~LevelsWindow()
{
    delete ui;
}

void LevelsWindow::on_pushButton_clicked()
{
    this->hide();
}
