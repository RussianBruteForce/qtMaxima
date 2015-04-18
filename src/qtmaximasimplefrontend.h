#ifndef QTMAXIMASIMPLEFRONTEND_H
#define QTMAXIMASIMPLEFRONTEND_H

#include <QWidget>
#include <QDebug>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QTextBrowser>
#include <QScrollBar>
#include <QStringBuilder>
#include "qtmaximaoutputwidget.h"
#include "qtmaximafrontend.h"

typedef QtMaximaOutputWidget Output;

class QtMaximaSimpleFrontend : public QtMaximaFrontend
{
	Q_OBJECT
public:
	explicit QtMaximaSimpleFrontend(QWidget *parent = 0);
	~QtMaximaSimpleFrontend();

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
	QVBoxLayout *mainLayout;
	QHBoxLayout *inputLayout;
	QLineEdit *requestEdit;
	Output *outputBrowser;
	QStringList inputS, outputS; //for imitating %i and %o
};

#endif // QTMAXIMASIMPLEFRONTEND_H
