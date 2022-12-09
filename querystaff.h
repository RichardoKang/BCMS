#ifndef QUERYSTAFF_H
#define QUERYSTAFF_H

#include <QWidget>

namespace Ui {
class queryStaff;
}

class queryStaff : public QWidget
{
    Q_OBJECT

public:
    explicit queryStaff(QWidget *parent = nullptr);
    ~queryStaff();

private:
    Ui::queryStaff *ui;
};

#endif // QUERYSTAFF_H
