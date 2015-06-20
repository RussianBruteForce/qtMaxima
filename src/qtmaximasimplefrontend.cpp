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

#include "qtmaximasimplefrontend.h"

QtMaximaSimpleFrontend::QtMaximaSimpleFrontend() :
	tex{true},
	mainLayout{std::make_unique<QVBoxLayout>()},
	inputLayout{std::make_unique<QHBoxLayout>()},
	requestEdit{std::make_unique<QLineEdit>()},
	outputBrowser{std::make_unique<Output>()}
{
	requestEdit->setEnabled(false);
	connect(requestEdit.get(), &QLineEdit::returnPressed,
		this, &QtMaximaSimpleFrontend::onCalculate);

	//outputBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

	inputLayout->addWidget(requestEdit.get());

	mainLayout->addWidget(outputBrowser.release());
	mainLayout->addItem(inputLayout.release());
	setLayout(mainLayout.release());
}

void QtMaximaSimpleFrontend::onBackendReady()
{
	requestEdit->setEnabled(true);
}

void QtMaximaSimpleFrontend::onNewLineIsReady(const QString& str)
{
	if (str.contains("false"))
		return;
	outputS.append(str.trimmed());
	outputBrowser->append("(%o" %
			      QString::number(outputS.size()-1) %
			      ") " %
			      str.trimmed(), tex);
}

void QtMaximaSimpleFrontend::onCalculate()
{
	QString request = requestEdit->text();
	inputS.append(request);
	outputBrowser->append("(%i" %
			      QString::number(inputS.size()-1) %
			      ") " %
			      request  % ";\n", false);

	if (tex)
		emit calculateItPlease("tex (" % request % ", false)"  % ";\n");
	else
		emit calculateItPlease(request  % ";\n");
}
