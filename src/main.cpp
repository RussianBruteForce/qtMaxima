#include <QApplication>
#include "qtmaxima.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QtMaxima m;

	return a.exec();
}
