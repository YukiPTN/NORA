#ifndef SETTINGFORM_H
#define SETTINGFORM_H

#include <QWidget>
#include <QMessageBox>

namespace Ui {
class settingForm;
}

class settingForm : public QWidget
{
    Q_OBJECT

public:
    explicit settingForm(QWidget *parent = 0);
    ~settingForm();

private slots:
    void on_settingForm_destroyed();

private:
    Ui::settingForm *ui;
};

#endif // SETTINGFORM_H
