#include "qtmaximastaticintegrateanddiffinterface.h"
#include "ui_qtmaximastaticintegrateanddiffinterface.h"

QtMaximaStaticIntegrateAndDiffInterface::QtMaximaStaticIntegrateAndDiffInterface(QWidget *parent) :
	QtMaximaFrontend(parent),
	ui(new Ui::QtMaximaStaticIntegrateAndDiffInterface),
	tex(true)
{
	ui->setupUi(this);

	outputBrowser = new Output(this);
	ui->outputLayout->addWidget(outputBrowser);

	connect(ui->diffButton, &QPushButton::clicked,
		this, &QtMaximaStaticIntegrateAndDiffInterface::onDiff);
	connect(ui->integrateButton, &QPushButton::clicked,
		this, &QtMaximaStaticIntegrateAndDiffInterface::onIntegrate);
	connect(ui->plainTextCheckBox, &QCheckBox::clicked,
		this, &QtMaximaStaticIntegrateAndDiffInterface::setPlainTextOutput);

}

QtMaximaStaticIntegrateAndDiffInterface::~QtMaximaStaticIntegrateAndDiffInterface()
{
	delete ui;
}

void QtMaximaStaticIntegrateAndDiffInterface::onBackendReady()
{
	ui->formulaEdit->setEnabled(true);
	ui->diffButton->setEnabled(true);
	ui->integrateButton->setEnabled(true);
}

void QtMaximaStaticIntegrateAndDiffInterface::onNewLineIsReady(const QString& str)
{
	outputBrowser->clear();
	if (str.contains("false"))
		return;
	outputBrowser->append(str, tex);
}

void QtMaximaStaticIntegrateAndDiffInterface::onDiff()
{
	QString request = "diff( " %
		       ui->formulaEdit->text().trimmed() %
		       ", " %
		       ui->respectEdit->text().trimmed() %
		       ")";

	if (tex)
		emit calculateItPlease("tex (" % request % ", false)"  % ";\n");
	else
		emit calculateItPlease(request  % ";\n");
}

void QtMaximaStaticIntegrateAndDiffInterface::onIntegrate()
{
	QString request = "integrate( " %
		       ui->formulaEdit->text().trimmed() %
		       ", " %
		       ui->respectEdit->text().trimmed() %
		       ")";

	if (tex)
		emit calculateItPlease("tex (" % request % ", false)"  % ";\n");
	else
		emit calculateItPlease(request  % ";\n");
}

void QtMaximaStaticIntegrateAndDiffInterface::setPlainTextOutput(bool plain)
{
	tex = !plain;
}

