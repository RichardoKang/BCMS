#include "querystaff.h"
#include "ui_querystaff.h"

queryStaff::queryStaff(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::queryStaff)
{
    ui->setupUi(this);
}

queryStaff::~queryStaff()
{
    delete ui;
}
