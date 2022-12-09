#ifndef ADDDRIVER_H
#define ADDDRIVER_H

#include <QWidget>

namespace Ui {
class addDriver;
}

class addDriver : public QWidget
{
    Q_OBJECT

public:
    explicit addDriver(QWidget *parent = nullptr);
    ~addDriver();

private:
    Ui::addDriver *ui;
};

#endif // ADDDRIVER_H
