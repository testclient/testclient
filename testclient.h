#ifndef TESTCLIENT_H
#define TESTCLIENT_H

#include <QtGui/QMainWindow>
#include "ui_testclient.h"

class testclient : public QMainWindow
{
	Q_OBJECT

public:
	testclient(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testclient();

private:
	Ui::testclientClass ui;
};

#endif // TESTCLIENT_H
