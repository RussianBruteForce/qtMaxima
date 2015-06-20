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

#ifndef QTMAXIMAFRONTEND_H
#define QTMAXIMAFRONTEND_H

#include <QWidget>

class QtMaximaFrontend : public QWidget
{
	Q_OBJECT
//public:
	//explicit QtMaximaFrontend(QWidget *parent = 0);

signals:
	void calculateItPlease(const QString &request);

public slots:
	virtual void onBackendReady() = 0;
	virtual void onNewLineIsReady(const QString& str) = 0;

};

#endif // QTMAXIMAFRONTEND_H
