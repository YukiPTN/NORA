#include "mainform.h"
#include "settingform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainForm w;
    settingForm s;
    w.show();

    return a.exec();
}
