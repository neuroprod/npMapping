#pragma once
#include "npIncludes.h"
class BasicRenderer
{
public:
	BasicRenderer(void);
	~BasicRenderer(void);
	void setup();
	void drawLine(const  vector<Vec2f *> &lineVector,    const cinder::Colorf &color);
	
};

