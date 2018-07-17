#include "stdafx.h"
#include "Sphere.h"
#include <iostream>
using namespace std;

Sphere::Sphere(ifstream& inputFile)
{
	string line;
	getline(inputFile, line); //skip the opening bracket '{'

	getline(inputFile, line); //Id= ...
	m_id = line.substr(strlen("Id= "));

	getline(inputFile, line); //Radius= ...
	m_radius = stod(line.substr(strlen("Radius= ")));

	getline(inputFile, line); //skip the closing bracket '}'
}


Sphere::~Sphere()
{
	cout << "Sphere destroyed (Id= " << m_id << ")\n";
}

void Sphere::Draw()
{
	cout << "(" << m_radius << ")";
}
