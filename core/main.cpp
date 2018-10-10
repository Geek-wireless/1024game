#include <QApplication>
#include "interface.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    interface game_window;
    game_window.show();

    return a.exec();
}
