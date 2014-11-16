#ifndef XIMAGE_H
#define XIMAGE_H

#include <QImage>

class XImage // Class for receive an image from the camera (dummy)
{
private:
    QImage *src_;
public:
    XImage(); // just loads an image
    ~XImage(); // just deletes the image, loaded in constructor
    const QImage * receiveImage(); // returns a pointer to the image
};

#endif // XIMAGE_H
