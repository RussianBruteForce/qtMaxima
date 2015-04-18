#include "qtmaxima.h"

QtMaxima::QtMaxima(Interface i, QObject *parent) :
        QObject(parent)
{
	backend = new Backend;

	if (i == Static)
		frontend = new QtMaximaStaticIntegrateAndDiffInterface;
	else
		frontend = new QtMaximaSimpleFrontend;

	connect(frontend, SIGNAL(calculateItPlease(QString)),
		backend, SLOT(submit(QString)));
	connect(backend, SIGNAL(ready()),
		frontend, SLOT(onBackendReady()));
	connect(backend, SIGNAL(newLineIsHere(QString)),
		frontend, SLOT(onNewLineIsReady(QString)));
	backend->go();
	frontend->show();
	qDebug() << "kek =)";
}

QtMaxima::~QtMaxima()
{
	delete backend;
	delete frontend;
}
