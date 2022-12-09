#ifndef QUERYSTAFFVIO_H
#define QUERYSTAFFVIO_H

#include <QWidget>

namespace Ui {
class queryStaffVio;
}

class queryStaffVio : public QWidget
{
    Q_OBJECT

public:
    explicit queryStaffVio(QWidget *parent = nullptr);
    ~queryStaffVio();

private:
    Ui::queryStaffVio *ui;
};

#endif // QUERYSTAFFVIO_H
