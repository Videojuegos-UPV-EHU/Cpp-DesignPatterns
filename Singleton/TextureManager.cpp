#include "stdafx.h"
#include "TextureManager.h"

TextureManager* TextureManager::m_pInstance = nullptr;

TextureManager::TextureManager()
{
	m_pInstance = this;
}


TextureManager::~TextureManager()
{
	m_pInstance = nullptr;
}

TextureManager* TextureManager::Get()
{
	if (m_pInstance== nullptr)
		m_pInstance = new TextureManager();
	
	return m_pInstance;
}