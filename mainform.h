#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include "settingform.h"

namespace Ui {
class mainForm;
}

class mainForm : public QWidget
{
    Q_OBJECT

public:
    explicit mainForm(QWidget *parent = 0);
    ~mainForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mainForm *ui;
    settingForm *set = new settingForm();
};

#endif // MAINFORM_H
