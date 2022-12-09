#ifndef ADDBUS_H
#define ADDBUS_H

#include <QWidget>

namespace Ui {
class addBus;
}

class addBus : public QWidget
{
    Q_OBJECT

public:
    explicit addBus(QWidget *parent = nullptr);
    ~addBus();

private:
    Ui::addBus *ui;
};

#endif // ADDBUS_H
