#include <QCoreApplication>
#include <QDebug>
#include <QTest>

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QTest::mouseClick(d, Qt::LeftButton, Qt::NoModifier, QPoint(x,y));
    return QCoreApplication::exec();
}
