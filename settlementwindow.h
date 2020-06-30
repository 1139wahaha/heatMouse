#ifndef SETTLEMENTWINDOW_H
#define SETTLEMENTWINDOW_H

#include <QDialog>

namespace Ui {
class SettlementWindow;
}

class SettlementWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SettlementWindow(QWidget *parent = nullptr);
    ~SettlementWindow();

public:
    void setScore(int);
    void setMaxCombos(int);

private slots:
    void on_pushButton_clicked();

private:
    Ui::SettlementWindow *ui;
    int score{0};
    int maxCombos{0};
};

#endif // SETTLEMENTWINDOW_H

/*
根据score和maxCombos做出结算界面
可以的话，加上动画特效，音效
根据分数和最大连接数，可以给出一个等级。比如优秀，超神...等
显示玩之后，点击返回按钮，调用hide函数
*/
