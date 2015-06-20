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

#include "qtmaximastaticintegrateanddiffinterface.h"
#include "ui_qtmaximastaticintegrateanddiffinterface.h"

QtMaximaStaticIntegrateAndDiffInterface::QtMaximaStaticIntegrateAndDiffInterface() :
	ui{std::make_unique<Ui::QtMaximaStaticIntegrateAndDiffInterface>()},
	outputBrowser{std::make_unique<Output>()}
{
	ui->setupUi(this);

	ui->outputLayout->addWidget(outputBrowser.get());

	connect(ui->diffButton, &QPushButton::clicked,
		this, &QtMaximaStaticIntegrateAndDiffInterface::onDiff);
	connect(ui->integrateButton, &QPushButton::clicked,
		this, &QtMaximaStaticIntegrateAndDiffInterface::onIntegrate);
	connect(ui->plainTextCheckBox, &QCheckBox::clicked,
		this, &QtMaximaStaticIntegrateAndDiffInterface::setPlainTextOutput);
}

void QtMaximaStaticIntegrateAndDiffInterface::onBackendReady()
{
	ui->formulaEdit->setEnabled(true);
	ui->diffButton->setEnabled(true);
	ui->integrateButton->setEnabled(true);
}

void QtMaximaStaticIntegrateAndDiffInterface::onNewLineIsReady(const QString& str)
{
	outputBrowser->clear();
	if (str.contains("false"))
		return;
	outputBrowser->append(str, tex);
}

void QtMaximaStaticIntegrateAndDiffInterface::onDiff()
{
	QString request = "diff( " %
		       ui->formulaEdit->text().trimmed() %
		       ", " %
		       ui->respectEdit->text().trimmed() %
		       ")";

	if (tex)
		emit calculateItPlease("tex (" % request % ", false)"  % ";\n");
	else
		emit calculateItPlease(request  % ";\n");
}

void QtMaximaStaticIntegrateAndDiffInterface::onIntegrate()
{
	QString request = "integrate( " %
		       ui->formulaEdit->text().trimmed() %
		       ", " %
		       ui->respectEdit->text().trimmed() %
		       ")";

	if (tex)
		emit calculateItPlease("tex (" % request % ", false)"  % ";\n");
	else
		emit calculateItPlease(request  % ";\n");
}

void QtMaximaStaticIntegrateAndDiffInterface::setPlainTextOutput(bool plain)
{
	tex = !plain;
}

