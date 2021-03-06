// Factory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Drawable.h"
#include <vector>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	vector<Drawable*> drawableObjects;
	string line;

	ifstream inputFile("objects.txt");
	if (inputFile.is_open())
	{
		//Read the input file and create object instances as we read them
		while (inputFile)
		{
			//create an object instance
			Drawable* pObject = Drawable::CreateInstance(inputFile);

			if (pObject != nullptr)
			{
				drawableObjects.push_back(pObject);
			}
		}

		inputFile.close();

		//Draw all the objects
		cout << "Drawing all the objects------------------\n";
		for (Drawable* obj : drawableObjects)
			obj->Draw();

		cout << "\n\nDeleting all the objects------------------\n";
		for (Drawable* obj : drawableObjects)
			delete obj;
	}
    return 0;
}

