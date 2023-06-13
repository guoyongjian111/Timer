#include "widget.h"
#include <QApplication>
#include <QTextCodec>
#include <QApplication>
#include <QLabel>
#include <QFont>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 加载 wenquanyi.tty 字体文件
    QFont font("wenquanyi.tty", 12);


    Widget w;
    w.show();

    return a.exec();
}
