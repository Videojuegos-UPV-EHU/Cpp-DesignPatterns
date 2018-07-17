#pragma once
#include "Drawable.h"

#include <iostream>
using namespace std;

class Box : public Drawable
{
	double m_width, m_height;
public:
	Box(ifstream& inputFile);
	virtual ~Box();

	void Draw();
};

