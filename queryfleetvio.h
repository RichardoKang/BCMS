#ifndef QUERYFLEETVIO_H
#define QUERYFLEETVIO_H

#include <QWidget>

namespace Ui {
class queryFleetVio;
}

class queryFleetVio : public QWidget
{
    Q_OBJECT

public:
    explicit queryFleetVio(QWidget *parent = nullptr);
    ~queryFleetVio();

private:
    Ui::queryFleetVio *ui;
};

#endif // QUERYFLEETVIO_H
