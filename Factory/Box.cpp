#include "stdafx.h"
#include "Box.h"


Box::Box(ifstream& inputFile)
{
	string line;
	getline(inputFile, line); //skip the opening bracket '{'

	getline(inputFile, line); //Id= ...
	m_id = line.substr(strlen("Id= "));

	getline(inputFile, line); //Height= ...
	m_height = stod(line.substr(strlen("Height= ")));

	getline(inputFile, line); //Width= ...
	m_width = stod(line.substr(strlen("Width= ")));

	getline(inputFile, line); //skip the closing bracket '{'
}


Box::~Box()
{
	cout << "Box destroyed (Id= " << m_id << ")\n";
}

void Box::Draw()
{
	cout << "[" << m_width << "x" << m_height << "]";
}
