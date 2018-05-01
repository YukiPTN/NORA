#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>

namespace Ui {
class mainForm;
}

class mainForm : public QWidget
{
    Q_OBJECT

public:
    explicit mainForm(QWidget *parent = 0);
    ~mainForm();

private:
    Ui::mainForm *ui;
};

#endif // MAINFORM_H
