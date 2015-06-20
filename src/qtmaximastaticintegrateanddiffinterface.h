#ifndef QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H
#define QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H

#include <QWidget>
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

#include <memory>
#include "qtmaximaoutputwidget.h"
#include "qtmaximafrontend.h"
#include "ui_qtmaximastaticintegrateanddiffinterface.h"

namespace Ui {
class QtMaximaStaticIntegrateAndDiffInterface;
}

class QtMaximaStaticIntegrateAndDiffInterface : public QtMaximaFrontend
{
	using Output = QtMaximaOutputWidget;
	Q_OBJECT

public:
	QtMaximaStaticIntegrateAndDiffInterface();
signals:
	void calculateItPlease(const QString &request);

public slots:
	void onBackendReady() override;
	void onNewLineIsReady(const QString& str) override;

private slots:
	void onDiff();
	void onIntegrate();
	void setPlainTextOutput(bool plain);

private:
	std::unique_ptr<Ui::QtMaximaStaticIntegrateAndDiffInterface> ui;
	std::unique_ptr<Output> outputBrowser;
	bool tex{true};
};

#endif // QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H
