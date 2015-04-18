#ifndef QTMAXIMAFRONTEND_H
#define QTMAXIMAFRONTEND_H

#include <QWidget>

class QtMaximaFrontend : public QWidget
{
	Q_OBJECT
public:
	explicit QtMaximaFrontend(QWidget *parent = 0);

signals:
	void calculateItPlease(const QString &request);

public slots:
	void onBackendReady();
	void onNewLineIsReady(const QString& str);

};

#endif // QTMAXIMAFRONTEND_H
