#include "widget.h"
#include "ui_widget.h"

static int i; // 统计比特数

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(&timer, SIGNAL(timeout()), this, SLOT(time_Slot())); // 连接定时器信号和槽函数
    time.setHMS(0, 0, 0, 0); // 初始化时间
    ui->ShowTime->setText("00:00:00:000"); // 在界面上显示初始化的时间
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_StartButton_clicked()
{
    timer.start(10); // 启动定时器，每隔 10 毫秒触发一次 timeout 信号
}


void Widget::time_Slot()
{
    // qDebug("haha");
    time = time.addMSecs(10); // 每次增加 10 毫秒
    ui->ShowTime->setText(time.toString("hh:mm:ss:zzz")); // 在界面上显示更新后的时间
}

void Widget::on_CloseButton_clicked()
{
    timer.stop(); // 停止定时器
}

void Widget::on_ResetButton_clicked()
{
    timer.stop(); // 停止定时器
    time.setHMS(0, 0, 0, 0); // 时间清零
    ui->ShowTime->setText("00:00:00:000"); // 在界面上显示初始化的时间
    ui->BitTime->clear(); // 清空统计比特的文本框
    i = 0; // 计数器清零
}

void Widget::on_bitButton_clicked()
{
    QString temp;
    i += 1; // 计数器加 1
    QTextStream(&temp) << i << ":"; // 将计数器的值转换成字符串，并添加冒号
    ui->BitTime->append(temp); // 在统计比特的文本框中添加字符串
    ui->BitTime->append(time.toString("hh:mm:ss:zzz")); // 在统计比特的文本框中添加时间
}

