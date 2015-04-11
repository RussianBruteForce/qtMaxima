#include "qtmaximabackend.h"

QtMaximaBackend::QtMaximaBackend(QObject *parent) :
	QObject(parent),
	busy(true)
{
}

QtMaximaBackend::~QtMaximaBackend()
{
	mProcess->terminate();
}

void QtMaximaBackend::go()
{
	startMaxima();
}

void QtMaximaBackend::readLine()
{
	emit newLineIsHere(QString(mProcess->readLine()));
}

void QtMaximaBackend::submit(const QString &str)
{
	//if (busy)
		//throw std::runtime_error("Maxima is busy!");
		//return QString();
	busy = true;
	mProcess->write(str.toLatin1());
}

void QtMaximaBackend::onReady()
{
	qDebug() << "ready read";
	busy = false;
	emit ready();
	emit newLineIsHere(QString(mProcess->readAll()));
}

bool QtMaximaBackend::startMaxima()
{
	QString command("maxima");
	QStringList args;
	args += "--very-quiet";

	mProcess = new QProcess(this);
	connect(mProcess, &QProcess::readyReadStandardOutput,
		this, &QtMaximaBackend::onReady);

	mProcess->start(command, args);
	mProcess->write("display2d: false;\n");
}
