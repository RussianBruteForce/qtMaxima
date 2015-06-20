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

#ifndef QTMAXIMA_H
#define QTMAXIMA_H

#include <QObject>
#include "qtmaximasimplefrontend.h"
#include "qtmaximastaticintegrateanddiffinterface.h"
#include "qtmaximabackend.h"

enum Interface {
	Interactive,
	Static
};

class QtMaxima : public QObject
{
	using Backend = QtMaximaBackend;
	using Frontend = QtMaximaFrontend;
	Q_OBJECT
public:
	explicit QtMaxima(Interface i, QObject *parent = 0);

private:
	std::unique_ptr<Backend> backend;
	std::unique_ptr<Frontend> frontend;

};

#endif // QTMAXIMA_H
