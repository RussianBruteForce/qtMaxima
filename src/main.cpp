#include <QApplication>
#include <QCommandLineParser>
#include "qtmaxima.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QCommandLineParser p;
	QCommandLineOption staticInterface("s",QCoreApplication::translate("main", "Static diff and integrate interface"));
	p.addOption(staticInterface);
	p.process(a);

	QtMaxima *m;
	if (p.isSet(staticInterface))
		m = new QtMaxima(Static);
	else
		m = new QtMaxima(Interactive);

	return a.exec();
}
