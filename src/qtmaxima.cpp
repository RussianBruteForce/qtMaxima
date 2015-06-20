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

#include "qtmaxima.h"

QtMaxima::QtMaxima(Interface i, QObject *parent) :
	QObject{parent},
	backend{std::make_unique<Backend>()}
{
	if (i == Static)
		frontend = std::make_unique<QtMaximaStaticIntegrateAndDiffInterface>();
	else
		frontend = std::make_unique<QtMaximaSimpleFrontend>();

	connect(frontend.get(), SIGNAL(calculateItPlease(QString)),
		backend.get(), SLOT(submit(QString)));
	connect(backend.get(), SIGNAL(ready()),
		frontend.get(), SLOT(onBackendReady()));
	connect(backend.get(), SIGNAL(newLineIsHere(QString)),
		frontend.get(), SLOT(onNewLineIsReady(QString)));
	backend->go();
	frontend->setWindowIcon(QIcon("qtmaxima.png"));
	frontend->show();
}
