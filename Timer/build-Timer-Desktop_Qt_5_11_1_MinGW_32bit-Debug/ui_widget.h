/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *ShowTime;
    QHBoxLayout *horizontalLayout;
    QPushButton *StartButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *CloseButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *ResetButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *bitButton;
    QTextBrowser *BitTime;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(458, 340);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ShowTime = new QLabel(Widget);
        ShowTime->setObjectName(QStringLiteral("ShowTime"));
        QFont font;
        font.setPointSize(30);
        ShowTime->setFont(font);
        ShowTime->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(ShowTime);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        StartButton = new QPushButton(Widget);
        StartButton->setObjectName(QStringLiteral("StartButton"));

        horizontalLayout->addWidget(StartButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        CloseButton = new QPushButton(Widget);
        CloseButton->setObjectName(QStringLiteral("CloseButton"));

        horizontalLayout->addWidget(CloseButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        ResetButton = new QPushButton(Widget);
        ResetButton->setObjectName(QStringLiteral("ResetButton"));

        horizontalLayout->addWidget(ResetButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        bitButton = new QPushButton(Widget);
        bitButton->setObjectName(QStringLiteral("bitButton"));

        horizontalLayout->addWidget(bitButton);


        verticalLayout->addLayout(horizontalLayout);

        BitTime = new QTextBrowser(Widget);
        BitTime->setObjectName(QStringLiteral("BitTime"));

        verticalLayout->addWidget(BitTime);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        ShowTime->setText(QString());
        StartButton->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", nullptr));
        CloseButton->setText(QApplication::translate("Widget", "\345\201\234\346\255\242", nullptr));
        ResetButton->setText(QApplication::translate("Widget", "\351\207\215\347\275\256", nullptr));
        bitButton->setText(QApplication::translate("Widget", "\346\211\223\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
