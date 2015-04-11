#include "qtmaximasimplefrontend.h"

QtMaximaSimpleFrontend::QtMaximaSimpleFrontend(QWidget* parent) :
	QWidget(parent)
{
	requestEdit = new QLineEdit(this);
	requestEdit->setEnabled(false);
	connect(requestEdit, &QLineEdit::returnPressed,
		this, &QtMaximaSimpleFrontend::onCalculate);

	outputBrowser = new QTextBrowser;
	outputBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
	outputBrowser->setText("Hi there!<br>");

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

void QtMaximaSimpleFrontend::onNewStringIsReady(const QString& str)
{
	outputBrowser->append(str.trimmed());
	auto vsb = outputBrowser->verticalScrollBar();
	vsb->setValue(vsb->maximum());
}

void QtMaximaSimpleFrontend::onCalculate()
{
	QString request = requestEdit->text();
	request += ";\n";
	outputBrowser->append(request);
	emit calculateItPlease(request);
}
