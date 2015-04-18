#include "qtmaximaoutputwidget.h"

QtMaximaOutputWidget::QtMaximaOutputWidget(QWidget *parent) :
	QWebView(parent)
{
	connect(this->page()->mainFrame(),&QWebFrame::contentsSizeChanged,
		this, &QtMaximaOutputWidget::scrollDown);
	page()->mainFrame()->setScrollBarPolicy(Qt::Vertical, Qt::ScrollBarAlwaysOn);

	templateUrl = QUrl::fromLocalFile(QDir::currentPath() + "/src/qtmaximaoutputwidget.html");

	QFile f(templateUrl.toLocalFile());
	f.open(QFile::ReadOnly | QFile::Text);
	htmlTemplate = f.readAll();
	f.close();

	setHtml(htmlOutput = htmlTemplate,templateUrl);
}

void QtMaximaOutputWidget::clear()
{
	setHtml(htmlOutput = htmlTemplate,templateUrl);
}

void QtMaximaOutputWidget::append(const QString& str, bool tex)
{
	if (!tex)
		htmlOutput = htmlOutput % "<br>" % str % "<br>";
	else {
		QString s = QString(str).replace("\\\\"," \\").replace(
			    "$$","$").replace(
			    "\""," ");
		htmlOutput = htmlOutput % "<br>" %
			     s % "<br>";
	}
	setHtml(htmlOutput,templateUrl);
}

void QtMaximaOutputWidget::scrollDown(const QSize& s)
{
	page()->mainFrame()->scroll(s.width(),s.height());
}
