#include "ximage.h"

/* filename of the image that will be loaded
 * and shown on the screen
 */
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
