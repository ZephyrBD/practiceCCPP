#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("井字棋");
    w.setWindowIcon(QIcon(":/images/icon.png"));
    w.show();
    return a.exec();
}
