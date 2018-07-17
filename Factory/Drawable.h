#pragma once

#include <string>
using namespace std;
#include <fstream>

class Drawable
{
protected:
	string m_id;
public:
	Drawable();
	virtual ~Drawable();

	//Abstract method that needs to be implemented by subclasses
	virtual void Draw() = 0;

	//Factory method
	static Drawable* CreateInstance(ifstream& inputFile);
};

