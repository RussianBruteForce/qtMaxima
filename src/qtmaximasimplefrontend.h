#ifndef QTMAXIMASIMPLEFRONTEND_H
#define QTMAXIMASIMPLEFRONTEND_H

#include <QWidget>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>
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

#include <QLineEdit>
#include <QPushButton>
#include <QTextBrowser>
#include <QScrollBar>
#include <QStringBuilder>
#include <memory>
#include "qtmaximaoutputwidget.h"
#include "qtmaximafrontend.h"

class QtMaximaSimpleFrontend : public QtMaximaFrontend
{
	using Output = QtMaximaOutputWidget;
	Q_OBJECT
public:
	explicit QtMaximaSimpleFrontend();

signals:
	void calculateItPlease(const QString &request);
	void askString();

public slots:
	void onBackendReady();
	void onNewLineIsReady(const QString& str);

private slots:
	void onCalculate();

private:
	bool tex;
	std::unique_ptr<QVBoxLayout> mainLayout;
	std::unique_ptr<QHBoxLayout> inputLayout;
	std::unique_ptr<QLineEdit> requestEdit;
	std::unique_ptr<Output> outputBrowser;
	QStringList inputS, outputS; //for imitating %i and %o
};

#endif // QTMAXIMASIMPLEFRONTEND_H
