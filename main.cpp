#include "testclient.h"
#include "Log.h"
#include <QtGui/QApplication>
#include <iostream>

int main(int argc, char *argv[])
{
	Log l;
	QApplication a(argc, argv);
	testclient w;
	w.show();
	return a.exec();
}
