#include <QtGui/QApplication>
#include "visor.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Visor w;
    w.show();
    
    return a.exec();
}
