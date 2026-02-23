#include "welcomeform.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setWindowIcon(QIcon(":/icon.png"));
    WelcomeForm wf;
    wf.show();
    return QCoreApplication::exec();
}
