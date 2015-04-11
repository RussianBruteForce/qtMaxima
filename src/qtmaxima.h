#ifndef QTMAXIMA_H
#define QTMAXIMA_H

#include <QObject>
#include "qtmaximasimplefrontend.h"
#include "qtmaximabackend.h"

typedef QtMaximaBackend Backend;
typedef QtMaximaSimpleFrontend Frontend;

class QtMaxima : public QObject
{
	Q_OBJECT
public:
	explicit QtMaxima(QObject *parent = 0);
	~QtMaxima();

signals:

public slots:

private:
	Backend *backend;
	Frontend *frontend;

};

#endif // QTMAXIMA_H
