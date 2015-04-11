#ifndef QTMAXIMABACKEND_H
#define QTMAXIMABACKEND_H

#include <QObject>
#include <exception>
#include <QProcess>
#include <QDebug>

class QtMaximaBackend : public QObject
{
	Q_OBJECT
public:
	explicit QtMaximaBackend(QObject *parent = 0);
	~QtMaximaBackend();

signals:
	void ready();
	void newLineIsHere(const QString &str);

public slots:
	void go();
	void submit(const QString& str);
	void readLine();

private slots:
	void onReady();

private:
	QProcess *mProcess;
	bool busy;

	bool startMaxima();
};

#endif // QTMAXIMABACKEND_H
