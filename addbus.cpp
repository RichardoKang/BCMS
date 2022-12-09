#include "addbus.h"
#include "ui_addbus.h"

addBus::addBus(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addBus)
{
    ui->setupUi(this);
}

addBus::~addBus()
{
    delete ui;
}
