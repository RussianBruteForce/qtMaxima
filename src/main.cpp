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

	std::unique_ptr<QtMaxima> m;
	if (p.isSet(staticInterface))
		m = std::make_unique<QtMaxima>(Static);
	else
		m = std::make_unique<QtMaxima>(Interactive);

	return a.exec();
}
