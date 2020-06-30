#ifndef RANK_H
#define RANK_H

#include <QDialog>

namespace Ui {
class rank;
}

class rank : public QDialog
{
    Q_OBJECT

public:
    explicit rank(QWidget *parent = nullptr);
    ~rank();

private slots:
    void on_pushButton_clicked();

private:
    Ui::rank *ui;
};

#endif // RANK_H
