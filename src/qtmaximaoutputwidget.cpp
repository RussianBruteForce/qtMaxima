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

#include "qtmaximaoutputwidget.h"

QtMaximaOutputWidget::QtMaximaOutputWidget(QWidget *parent) :
	QWebView{parent}
{
	connect(this->page()->mainFrame(),&QWebFrame::contentsSizeChanged,
		this, &QtMaximaOutputWidget::scrollDown);
	page()->mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOn);

	templateUrl = QUrl::fromLocalFile(QDir::currentPath() + "/src/qtmaximaoutputwidget.html");

	QFile f(templateUrl.toLocalFile());
	f.open(QFile::ReadOnly | QFile::Text);
	htmlTemplate = f.readAll();
	f.close();

	setHtml(htmlOutput = htmlTemplate,templateUrl);
}

void QtMaximaOutputWidget::clear()
{
	setHtml(htmlOutput = htmlTemplate,templateUrl);
}

void QtMaximaOutputWidget::append(const QString& str, bool tex)
{
	if (!tex)
		htmlOutput = htmlOutput % "<br>" % str % "<br>";
	else {
		QString s = QString(str).replace("\\\\"," \\").replace(
			    "$$","$").replace(
			    "\""," ");
		htmlOutput = htmlOutput % "<br>" %
			     s % "<br>";
	}
	setHtml(htmlOutput, templateUrl);
}

void QtMaximaOutputWidget::scrollDown(const QSize& s)
{
	page()->mainFrame()->scroll(s.width(),s.height());
}
