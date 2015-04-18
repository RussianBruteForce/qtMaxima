#ifndef QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H
#define QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H

#include <QWidget>
#include "qtmaximaoutputwidget.h"
#include "qtmaximafrontend.h"

typedef QtMaximaOutputWidget Output;

namespace Ui {
class QtMaximaStaticIntegrateAndDiffInterface;
}

class QtMaximaStaticIntegrateAndDiffInterface : public QtMaximaFrontend
{
	Q_OBJECT

public:
	explicit QtMaximaStaticIntegrateAndDiffInterface(QWidget *parent = 0);
	~QtMaximaStaticIntegrateAndDiffInterface();
signals:
	void calculateItPlease(const QString &request);

public slots:
	void onBackendReady();
	void onNewLineIsReady(const QString& str);

private slots:
	void onDiff();
	void onIntegrate();
	void setPlainTextOutput(bool plain);

private:
	Ui::QtMaximaStaticIntegrateAndDiffInterface *ui;
	Output *outputBrowser;
	bool tex;
};

#endif // QTMAXIMASTATICINTEGRATEANDDIFFINTERFACE_H
