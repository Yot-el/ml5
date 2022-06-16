#include <QCoreApplication>
#include "ltime.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    LTime t_start(15,30);
    LTime t_end("17:00");

    t_start.print();
    t_end.print();

    int difference = t_end - t_start;
    qDebug("%d минут", difference);

    LTime t_dif = t_start + difference;
    t_dif.print();

    return a.exec();
}
