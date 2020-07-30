#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() << "Salam";
    qInfo() << "Bye";

    return a.exec();
}
