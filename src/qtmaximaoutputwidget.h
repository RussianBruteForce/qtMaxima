#ifndef QTMAXIMAOUTPUTWIDGET_H
#define QTMAXIMAOUTPUTWIDGET_H

#include <QDebug>

#include <QWebView>
#include <QDir>
#include <QFile>
#include <QStringBuilder>
#include <QWebFrame>

class QtMaximaOutputWidget : public QWebView
{
	Q_OBJECT
public:
	explicit QtMaximaOutputWidget(QWidget *parent = 0);
	void clear();

signals:

public slots:
	void append(const QString& str, bool tex = true);
	void scrollDown(const QSize &s);
private:
	QString htmlOutput, htmlTemplate;
	QUrl templateUrl;
};

#endif // QTMAXIMAOUTPUTWIDGET_H
