/*
 *    This file is part of qtMaxima.
 *
 *    qtMaxima is free software: you can redistribute it and/or modify
 *    it under the terms of the GNU General Public License as published by
 *    the Free Software Foundation, either version 3 of the License, or
 *    (at your option) any later version.
 *
 *    qtMaxima is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with qtMaxima in LICENSE file.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "qtmaximabackend.h"

QtMaximaBackend::QtMaximaBackend(QObject *parent) :
	QObject{parent},
	mProcess{std::make_unique<QProcess>()}
{
}

QtMaximaBackend::~QtMaximaBackend()
{
	mProcess->terminate();
	mProcess->waitForFinished();
	mProcess->kill();
	mProcess->waitForFinished(1000);
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
	busy = false;
	emit ready();
	emit newLineIsHere(QString(mProcess->readAll()));
}

void QtMaximaBackend::startMaxima()
{
	QString command("maxima");
	QStringList args;
	args += "--very-quiet";
	connect(mProcess.get(), &QProcess::readyReadStandardOutput,
		this, &QtMaximaBackend::onReady);

	mProcess->start(command, args);
	mProcess->write("display2d: false;\n");
}
