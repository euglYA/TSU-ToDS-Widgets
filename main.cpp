#include "win.h"
#include <QVBoxLayout>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication appl(argc, argv);
    Window win;
    win.show();
    return appl.exec();
}
