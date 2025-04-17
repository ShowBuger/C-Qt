#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //��Ȼ����һ�д������widet��ui���ڹ�����������η��ʹ��ڴ�С�仯��ʱ������Ĳ��ֲ�����֮�仯
    //ͨ���������д��������ʾ˵�����ô��ڱ仯ʱ�����ּ����ӿؼ���֮����
    this->setLayout(ui->verticalLayout);
    ui->widgetBottom->setLayout(ui->horizontalLayout);
}

Widget::~Widget()
{
    delete ui;
}

