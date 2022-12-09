#include "adddriver.h"
#include "ui_adddriver.h"

addDriver::addDriver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addDriver)
{
    ui->setupUi(this);
}

addDriver::~addDriver()
{
    delete ui;
}
