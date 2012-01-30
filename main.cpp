#include "testclient.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	testclient w;
	w.show();
	return a.exec();
}
