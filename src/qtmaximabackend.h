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

#ifndef QTMAXIMABACKEND_H
#define QTMAXIMABACKEND_H

#include <QObject>
#include <QProcess>
#include <memory>

class QtMaximaBackend : public QObject
{
	Q_OBJECT
public:
	explicit QtMaximaBackend(QObject *parent = 0);
	~QtMaximaBackend();

signals:
	void ready();
	void newLineIsHere(const QString &str);

public slots:
	void go();
	virtual void submit(const QString& str);
	void readLine();

private slots:
	void onReady();

private:
	std::unique_ptr<QProcess> mProcess;
	bool busy{true};
	void startMaxima();
};

#endif // QTMAXIMABACKEND_H
