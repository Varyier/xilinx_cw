#include "xilinxgui.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	XilinxGUI w;
	w.show();
	return a.exec();
}
