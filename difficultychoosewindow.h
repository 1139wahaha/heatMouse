#ifndef DIFFICULTYCHOOSEWINDOW_H
#define DIFFICULTYCHOOSEWINDOW_H

#include <QDialog>
#include"playwindow1.h"
#include"settlementwindow.h"
namespace Ui {
class DifficultyChooseWindow;
}

class DifficultyChooseWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DifficultyChooseWindow(QWidget *parent = nullptr);
    ~DifficultyChooseWindow();

private slots:

    void on_QBtnExit_clicked();

    void on_QBtnDifficult_clicked();

    void on_QBtnMedium_clicked();

    void on_QBtnSimple_clicked();

private:
    Ui::DifficultyChooseWindow *ui;
    PlayWindow1* pPlayWindow1 = new PlayWindow1;//创建玩游戏的界面
    SettlementWindow* pPSettlementWindow = new SettlementWindow();//结算界面
    int levelFlag = 0;
    int score{0};
    int maxCombos{0};
};

#endif // DIFFICULTYCHOOSEWINDOW_H
