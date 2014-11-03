#include "xilinxgui.h"

XilinxGUI::XilinxGUI(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	QObject::connect(ui.actExit, SIGNAL(triggered()), this, SLOT(ExitProgram()));
	QObject::connect(ui.btnSend, SIGNAL(clicked()), this, SLOT(SendText()));
}

XilinxGUI::~XilinxGUI()
{
}

void XilinxGUI::ExitProgram()
{
	qApp->quit();
}

void XilinxGUI::SendText()
{
	ui.lblDest->setText(ui.edSrc->text());
}