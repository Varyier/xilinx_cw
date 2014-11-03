#ifndef XILINXGUI_H
#define XILINXGUI_H

#include <QtGui/QMainWindow>
#include "ui_xilinxgui.h"

class XilinxGUI : public QMainWindow
{
	Q_OBJECT

public:
	XilinxGUI(QWidget *parent = 0, Qt::WFlags flags = 0);
	~XilinxGUI();

private:
	Ui::XilinxGUIClass ui;

public slots:
	void ExitProgram();
	void SendText();
};

#endif // XILINXGUI_H
