#include "calculator.h"
#include "ui_calculator.h"

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->textEdit->setReadOnly(true);
    ui->pushButton_Num_0->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_1->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_2->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_3->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_4->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_5->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_6->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_7->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_8->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_Num_9->setStyleSheet("background-color: #a9a9a9");
    ui->pushButton_eq->setStyleSheet("background-color: orange");
    ui->pushButton_delete->setStyleSheet("font-weight: bold");
    ui->textEdit->setStyleSheet("background-color: cyan");
}
Calculator::~Calculator()
{
    delete ui;
}

void Calculator::on_pushButton_Num_0_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("0");
}


void Calculator::on_pushButton_Num_1_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("1");

}


void Calculator::on_pushButton_Num_2_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("2");

}


void Calculator::on_pushButton_Num_3_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("3");

}


void Calculator::on_pushButton_Num_4_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("4");

}


void Calculator::on_pushButton_Num_5_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("5");

}


void Calculator::on_pushButton_Num_6_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("6");

}


void Calculator::on_pushButton_Num_7_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("7");
}


void Calculator::on_pushButton_Num_8_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("8");
}


void Calculator::on_pushButton_Num_9_clicked()
{
    if (justCalculated)
    {
        ui->textEdit->clear();
        justCalculated = false;
    }
    ui->textEdit->insertPlainText("9");
}


void Calculator::on_pushButton_dev_clicked()
{
    ui->textEdit->insertPlainText("/");
}


void Calculator::on_pushButton_mult_clicked()
{
    ui->textEdit->insertPlainText("*");
}


void Calculator::on_pushButton_sub_clicked()
{
   // ui->lineEdit->setText(ui->lineEdit->text() + "-");
    ui->textEdit->insertPlainText("-");

}


void Calculator::on_pushButton_add_clicked()
{
   // ui->lineEdit->setText(ui->lineEdit->text() + "+");
    ui->textEdit->insertPlainText("+");

}


void Calculator::on_pushButton_delete_clicked()
{
    QString text = ui->textEdit->toPlainText();
    text.chop(1);
    ui->textEdit->setPlainText(text);
}


void Calculator::on_pushButton_point_clicked()
{
    ui->textEdit->insertPlainText(".");
}


void Calculator::on_pushButton_eq_clicked()
{
    QString expr = ui->textEdit->toPlainText();

    QList<double> numbers;
    QList<QChar> ops;

    QString currentNum="";

    for(int i=0;i<expr.length();++i)
    {
        QChar ch = expr[i];
        if(ch.isDigit() || ch=='.')
        {
            currentNum+=ch;
        }
        else if(ch=='+' || ch=='-' || ch=='/' || ch=='*')
        {
            numbers.append(currentNum.toDouble());
            ops.append(ch);
            currentNum = "";
        }
    }
    if(!currentNum.isEmpty())
        numbers.append(currentNum.toDouble());

    double result = numbers[0];
    for(int i =0; i<ops.size();++i)
    {
        if(ops[i] == '+')
            result += numbers[i+1];
        else if(ops[i] == '-')
            result -= numbers[i+1];
        else if (ops[i] == '/')
            result /= numbers[i+1];
        else if (ops[i] == '*')
            result *= numbers[i+1];
    }


    ui->textEdit->append("");
    ui->textEdit->append(QString::number(result));
    justCalculated = true;
}

