#ifndef QTMAXIMA_H
#define QTMAXIMA_H

#include <QObject>
#include "qtmaximasimplefrontend.h"
#include "qtmaximastaticintegrateanddiffinterface.h"
#include "qtmaximabackend.h"

typedef QtMaximaBackend Backend;
typedef QtMaximaFrontend Frontend;

enum Interface {
	Interactive,
	Static
};

class QtMaxima : public QObject
{
	Q_OBJECT
public:
	explicit QtMaxima(Interface i, QObject *parent = 0);
	~QtMaxima();

signals:

public slots:

private:
	Backend *backend;
	Frontend *frontend;

};

#endif // QTMAXIMA_H
