#include "xilinxgui.h"

/* Doesn't work with spliting source code.
 * Defining and implementing 'XImage' here.
 */
//#include "ximage.h"

// <Start of class 'XImage' definition> (from file 'ximage.h')
class XImage
{
private:
    QImage *src_;
public:
    XImage();
    ~XImage();
    const QImage * receiveImage();
};

// <End of class 'XImage' definition>
// <Start of class 'XImage' implementation> (from file 'ximage.cpp')

#define IMGSRC "testimg.png"

XImage::XImage()
{
    src_ = new QImage(IMGSRC);
}

XImage::~XImage()
{
    delete src_;
}

const QImage * XImage::receiveImage()
{
    return src_;
}
// <End of class 'XImage' implementation>

XilinxGUI::XilinxGUI(QWidget *parent, Qt::WindowFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	QObject::connect(ui.actExit, SIGNAL(triggered()), this, SLOT(ExitProgram()));
    QObject::connect(ui.btnShowPic, SIGNAL(clicked()), this, SLOT(ShowPic()));
}

XilinxGUI::~XilinxGUI()
{
}

void XilinxGUI::ExitProgram()
{
	qApp->quit();
}

void XilinxGUI::ShowPic()
{
    XImage ximg;
    ui.lblImageView->setScaledContents(true);
    ui.lblImageView->setPixmap( QPixmap::fromImage(*ximg.receiveImage()) );
}
