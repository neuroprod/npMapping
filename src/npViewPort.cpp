#include "npViewPort.h"

npViewPort::npViewPort(void)
{
}
npViewPort::~npViewPort(void)
{

}
void npViewPort::preSetup(int width, int height)
{
maxWidth  =width;
maxHeight  =height;
}



void npViewPort::setup()
{


}
void npViewPort::setPos(int x, int y, int _width, int _height)
{
	vpX =x;
	vpY =y;
	vpWidth  =width;
	vpHeight  =height;
}
void npViewPort::bind()
{


}

void npViewPort::draw()
{

}
void npViewPort::unbind()
{


}
void npViewPort::drawViewPort()
{

}