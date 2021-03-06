// Singleton.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TextureManager.h"



int main()
{
	TextureManager* pTextureManager = new TextureManager();


	//These calls to TextureManager::Get() could be anywhere in our code, but always called
	//after creating the texture manager, and before destroying it
	TextureManager* pTM1 = TextureManager::Get();
	TextureManager* pTM2 = TextureManager::Get();
	TextureManager* pTM3 = TextureManager::Get();


	delete pTextureManager;
    return 0;
}

