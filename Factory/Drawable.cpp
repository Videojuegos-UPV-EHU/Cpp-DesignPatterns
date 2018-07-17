#include "stdafx.h"
#include "Drawable.h"
#include "Box.h"
#include "Sphere.h"

Drawable::Drawable()
{
}


Drawable::~Drawable()
{
}

Drawable* Drawable::CreateInstance(ifstream& inputFile)
{
	string objectName;
	getline(inputFile, objectName);

	if (objectName == "Box")
		return new Box(inputFile);
	else if (objectName == "Sphere")
		return new Sphere(inputFile);

	return nullptr;
}