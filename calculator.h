#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Calculator;
}
QT_END_NAMESPACE

class Calculator : public QMainWindow
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();

private slots:

    void on_pushButton_Num_0_clicked();

    void on_pushButton_Num_1_clicked();

    void on_pushButton_Num_2_clicked();

    void on_pushButton_Num_3_clicked();

    void on_pushButton_Num_4_clicked();

    void on_pushButton_Num_5_clicked();

    void on_pushButton_Num_6_clicked();

    void on_pushButton_Num_7_clicked();

    void on_pushButton_Num_8_clicked();

    void on_pushButton_Num_9_clicked();

    void on_pushButton_dev_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_sub_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_eq_clicked();

private:
    Ui::Calculator *ui;
    bool justCalculated = false;
};
#endif // CALCULATOR_H
