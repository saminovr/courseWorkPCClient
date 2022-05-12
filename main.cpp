#include "mainmenu.h"

#include <QApplication>
#include <QtWidgets>

void delaySplash();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



    MainMenu w;
    w.setWindowTitle("AUTOSHOP");


    QIcon icon(":/appIcon.jpg");
    w.setWindowIcon(icon);

//    QSplashScreen splash(QPixmap("://splash.jpg"));
//    splash.showNormal();

//    delaySplash();

//    splash.finish(&w);

    QPalette pal;
    pal.setColor(w.backgroundRole(), QColor(240,130,19));
    w.setPalette(pal);

    w.show();

    return a.exec();
}
void delaySplash()
{
    QElapsedTimer timer;
    timer.start();
    for (int i=0; i<100;)
    {
        if (timer.elapsed()>40)
        {
            timer.start();
            i++;
        }
    }
}
