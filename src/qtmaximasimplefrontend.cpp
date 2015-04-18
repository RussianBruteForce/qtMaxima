#include "qtmaximasimplefrontend.h"

QtMaximaSimpleFrontend::QtMaximaSimpleFrontend(QWidget* parent) :
	QtMaximaFrontend(parent),
	tex(true)
{
	requestEdit = new QLineEdit(this);
	requestEdit->setEnabled(false);
	connect(requestEdit, &QLineEdit::returnPressed,
		this, &QtMaximaSimpleFrontend::onCalculate);

	outputBrowser = new Output(this);
	//outputBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

	inputLayout = new QHBoxLayout();
	inputLayout->addWidget(requestEdit);

	mainLayout = new QVBoxLayout(this);
	mainLayout->addWidget(outputBrowser);
	mainLayout->addItem(inputLayout);
}

QtMaximaSimpleFrontend::~QtMaximaSimpleFrontend()
{
	delete inputLayout;
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
