#include "widget.h"
#include "./ui_widget.h"
#include <QMessageBox>
#include <QPushButton>
#include <QIcon>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setMaximumSize(520,620);
    this->setMinimumSize(520,620);
}

Widget::~Widget()
{
    delete ui;
}

int player = 0;
int game[3][3]={
    {-1,-1,-1},
    {-1,-1,-1},
    {-1,-1,-1},
    };
int kicktop[9] ={0};

void Widget::on_oneButton_clicked()
{
    ButtonIcon(ui->oneButton,0,0,0);
}

void Widget::on_twoButton_clicked()
{
    ButtonIcon(ui->twoButton,1,0,1);
}


void Widget::on_threeButton_clicked()
{
    ButtonIcon(ui->threeButton,2,0,2);
}


void Widget::on_fourButton_clicked()
{
    ButtonIcon(ui->fourButton,3,1,0);
}


void Widget::on_fiveButton_clicked()
{
    ButtonIcon(ui->fiveButton,4,1,1);
}


void Widget::on_sixButton_clicked()
{
    ButtonIcon(ui->sixButton,5,1,2);
}


void Widget::on_sevenButton_clicked()
{
    ButtonIcon(ui->sevenButton,6,2,0);
}


void Widget::on_eightButton_clicked()
{
    ButtonIcon(ui->eightButton,7,2,1);
}

void Widget::on_nineButton_clicked()
{
    ButtonIcon(ui->nineButton,8,2,2);
}

void Widget::on_exitButton_clicked()
{
    QMessageBox::information(this,"井字棋","感谢您的游玩！");
    QCoreApplication::quit();
}

void Widget::ButtonIcon(QPushButton *button, int bnum, int bx, int by)
//检查点击并且修改按钮图标
{
    if (player == 0 && kicktop[bnum] == 0) {
        QIcon con(":/images/X.png");
        button->setIcon(con);
        game[bx][by] = 1;
        kicktop[bnum] = 1;
        player = 1;
    } else if (player == 1 && kicktop[bnum] == 0) {
        QIcon con(":/images/O.png");
        button->setIcon(con);
        game[bx][by] = 0;
        kicktop[bnum] = 1;
        player = 0;
    }
    winorlose(game);
}

int Widget::winorlose(int game[3][3])
//检查是否有赢家产生，并且弹窗提醒
{
    int numof0 = 0;
    int numof1 = 0;
    int result = -1;
    // 检查行
    for(int i=0; i<3 && result == -1; i++)
    {
        numof0 = 0;
        numof1 = 0;
        for(int j=0; j<3; j++)
        {
            if(game[i][j] == 0){
                numof0++;
            } else if (game[i][j] == 1){
                numof1++;
            }
        }
        if(numof0 == 3){
            result = 0;
        } else if(numof1 == 3){
            result = 1;
        }
    }
    // 检查列
    if(result == -1){
        for(int j=0; j<3 && result == -1; j++)
        {
            numof0 = 0;
            numof1 = 0;
            for(int i=0; i<3; i++)
            {
                if(game[i][j] == 0){
                    numof0++;
                } else if (game[i][j] == 1){
                    numof1++;
                }
            }
            if(numof0 == 3){
                result = 0;
            } else if(numof1 == 3){
                result = 1;
            }
        }
    }
    // 检查对角线
    if(result == -1){
        numof0 = 0;
        numof1 = 0;
        for(int i=0; i<3; i++)
        {
            if(game[i][i] == 0){
                numof0++;
            } else if (game[i][i] == 1){
                numof1++;
            }
        }
        if(numof0 == 3){
            result = 0;
        } else if(numof1 == 3){
            result = 1;
        }
    }
    if(result == -1){
        numof0 = 0;
        numof1 = 0;
        for(int i=0; i<3; i++)
        {
            if(game[i][3-i-1] == 0){
                numof0++;
            } else if (game[i][3-i-1] == 1){
                numof1++;
            }
        }
        if(numof0 == 3){
            result = 0;
        } else if(numof1 == 3){
            result = 1;
        }
    }
    if(result == -1){
        // 检查是否平局
        bool isFull = true;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                if(game[i][j] == -1) {
                    isFull = false;
                    break;
                }
        if(isFull) result = 2; // 平局
    }
    //判断并且弹窗提示
    if(result == 0)
    {
        QMessageBox::information(this,"结果","O is Winner！！");
        exitend();
    }
    else if(result == 1)
    {
        QMessageBox::information(this,"结果","X is Winner！！");
        exitend();
    }
    else if(result == 2)
    {
        QMessageBox::information(this,"结果","NO Winner！！");
        exitend();
    }
    return result;
}

void Widget::exitend()
//清空棋盘并重置游戏
{
    ui->oneButton->setIcon(QIcon());
    ui->twoButton->setIcon(QIcon());
    ui->threeButton->setIcon(QIcon());
    ui->fourButton->setIcon(QIcon());
    ui->fiveButton->setIcon(QIcon());
    ui->sixButton->setIcon(QIcon());
    ui->sevenButton->setIcon(QIcon());
    ui->eightButton->setIcon(QIcon());
    ui->nineButton->setIcon(QIcon());
    player = 0;
    for (int i = 0; i < 9; i++)
    {
        kicktop[i] = 0;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            game[i][j] = -1;
        }
    }
}
