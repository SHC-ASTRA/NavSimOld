#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class NavSimApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void NavSimApp::setup()
{
	this->setWindowSize(400, 400);
	this->getWindow()->setTitle("2d Navigation Sim");
	this->getWindow()->setBorderless(false);
}

void NavSimApp::mouseDown( MouseEvent event )
{

}

void NavSimApp::update()
{
}

void NavSimApp::draw()
{
}

CINDER_APP( NavSimApp, RendererGl )
