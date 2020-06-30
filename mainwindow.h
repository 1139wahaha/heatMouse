#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "helpwindow.h"
#include "difficultychoosewindow.h"
#include "levelswindow.h"
#include "rank.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_QBtnExit_clicked();

    void on_QBtnHelp_clicked();

    void on_QBtnCommon_clicked();

    void on_QBtnLevels_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    HelpWindow* pHelpWindow=new HelpWindow;
    DifficultyChooseWindow* pDifficultyChooseWindow = new DifficultyChooseWindow;
    LevelsWindow* pLevelWindow = new LevelsWindow;
    rank* pRank = new rank;
};
#endif // MAINWINDOW_H
