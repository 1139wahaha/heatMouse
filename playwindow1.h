#ifndef PLAYWINDOW1_H
#define PLAYWINDOW1_H

#include <QDialog>

namespace Ui {
class PlayWindow1;
}

class PlayWindow1 : public QDialog
{
    Q_OBJECT

public:
    explicit PlayWindow1(QWidget *parent = nullptr);
    ~PlayWindow1();
    void setLevelFalg(int);
private slots:
    void on_pushButton_2_clicked();

public:
    void game();
    int getSocre();
    int getMaxCombos();
    bool getGameOver();

private:
    Ui::PlayWindow1 *ui;
    int levelFlag{0};//接收难度等级
    int score{0};//积分
    int maxCombos{0};//maxCombos
    bool gameOver=false;//在游戏过程中选择提前结束游戏，设置成true；
};

#endif // PLAYWINDOW1_H

/*
根据levelFlag设置相应的数据，体现游戏难度。
根据游戏结果设置这个类里面的score和maxCombos;
游戏界面的美化，音效，完成playwindow1的UI实现
游戏结束并且设置好score和maxCombo后，调用hide函数关闭窗口
*/
