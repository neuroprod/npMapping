#pragma once
#include "npIncludes.h"
class npViewPort
{
public:
	npViewPort(void);
	~npViewPort(void);

int	maxWidth;
int maxHeight;


	void preSetup(int width, int height);
	void setup();
	void setPos(int x, int y, int width, int height);
	void bind();
	void unbind();
	void draw();
	void drawViewPort();
	bool isVisble:
	bool isDirty;
};