#include "querystaffvio.h"
#include "ui_querystaffvio.h"

queryStaffVio::queryStaffVio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::queryStaffVio)
{
    ui->setupUi(this);
}

queryStaffVio::~queryStaffVio()
{
    delete ui;
}
