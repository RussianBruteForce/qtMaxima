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

class QtMaximaSimpleFrontend : public QWidget
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
	void onNewStringIsReady(const QString& str);

private slots:
	void onCalculate();

private:
	QVBoxLayout *mainLayout;
	QHBoxLayout *inputLayout;
	QLineEdit *requestEdit;
	QTextBrowser *outputBrowser;
};

#endif // QTMAXIMASIMPLEFRONTEND_H
