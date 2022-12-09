#include "addviorec.h"
#include "ui_addviorec.h"

addVioRec::addVioRec(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::addVioRec)
{
    ui->setupUi(this);
}

addVioRec::~addVioRec()
{
    delete ui;
}
