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

#ifndef QTMAXIMAOUTPUTWIDGET_H
#define QTMAXIMAOUTPUTWIDGET_H

#include <QDebug>

#include <QWebView>
#include <QDir>
#include <QFile>
#include <QStringBuilder>
#include <QWebFrame>

class QtMaximaOutputWidget : public QWebView
{
	Q_OBJECT
public:
	explicit QtMaximaOutputWidget(QWidget *parent = 0);
	void clear();

signals:

public slots:
	void append(const QString& str, bool tex = true);
	void scrollDown(const QSize &s);
private:
	QString htmlOutput, htmlTemplate;
	QUrl templateUrl;
};

#endif // QTMAXIMAOUTPUTWIDGET_H
