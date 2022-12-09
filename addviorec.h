#ifndef ADDVIOREC_H
#define ADDVIOREC_H

#include <QWidget>

namespace Ui {
class addVioRec;
}

class addVioRec : public QWidget
{
    Q_OBJECT

public:
    explicit addVioRec(QWidget *parent = nullptr);
    ~addVioRec();

private:
    Ui::addVioRec *ui;
};

#endif // ADDVIOREC_H
