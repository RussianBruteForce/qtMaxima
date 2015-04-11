#include "qtmaxima.h"

QtMaxima::QtMaxima(QObject *parent) :
        QObject(parent)
{
	frontend = new Frontend;
	backend = new Backend;
	connect(frontend, &Frontend::calculateItPlease,
		backend, &Backend::submit);
	connect(backend, &Backend::ready,
		frontend, &Frontend::onBackendReady);
	connect(frontend, &Frontend::askString,
		backend, &Backend::readLine);
	connect(backend, &Backend::newLineIsHere,
		frontend, &Frontend::onNewStringIsReady);
	backend->go();
	frontend->show();
	qDebug() << "kek =)";
}

QtMaxima::~QtMaxima()
{
	backend->deleteLater();
	frontend->deleteLater();
}
