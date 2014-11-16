#include "xilinxgui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	XilinxGUI w;
	w.show();
	return a.exec();
}
