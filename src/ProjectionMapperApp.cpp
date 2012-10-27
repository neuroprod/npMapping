#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"
#include "BasicRenderer.h"
#include "npViewPort.h"
using namespace ci;
using namespace ci::app;
using namespace std;

class ProjectionMapperApp : public AppBasic {

	BasicRenderer renderer;
	vector<npViewPort *> viewPorts;
  public:
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void ProjectionMapperApp::setup()
{
	npViewPort *vp = new npViewPort();
	vp->setup(1024,1024);
	vp->setPos(0,100,300,300);
	viewPorts.push_back(vp)
	renderer.setup();
}

void ProjectionMapperApp::mouseDown( MouseEvent event )
{
}

void ProjectionMapperApp::update()
{
}

void ProjectionMapperApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) );
	for(int i =0; i< 	viewPorts.size();i++)
	{
		viewPorts[i]->drawViewPort();

	}

 
}

CINDER_APP_BASIC( ProjectionMapperApp, RendererGl )
