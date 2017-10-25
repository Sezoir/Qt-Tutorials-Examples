#include <QCoreApplication>
#include<QDebug> // Including this for qWarning()

int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);

    int x = 20;
    QString msg("Hello Console"); // When working with Qt classes, use the QString rather than the STL string.

    //qWarning("Hello Console"); // Note this only works with char *.
    //qWarning() << "Hello Console." << x; // Note that it adds space and flushes the buffer.
    //qWarning().nospace() << "Hello Console." << x;
    //qWarning() << msg << x;
    //qWarning(qPrintable(msg)); // qPrintable() converts the argument from a QString into a char *.

    QTextStream out_stream(stdout);
    out_stream << msg << " " << x;

    //return a.exec();
}
