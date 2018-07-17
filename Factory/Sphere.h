#pragma once
#include "Drawable.h"



class Sphere : 	public Drawable
{
	double m_radius;
public:
	Sphere(ifstream& inputFile);
	virtual ~Sphere();

	void Draw();
};

