#include "queryfleetvio.h"
#include "ui_queryfleetvio.h"

queryFleetVio::queryFleetVio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::queryFleetVio)
{
    ui->setupUi(this);
}

queryFleetVio::~queryFleetVio()
{
    delete ui;
}
