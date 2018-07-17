#pragma once

class TextureManager
{
	static TextureManager* m_pInstance;
public:
	TextureManager();
	virtual ~TextureManager();

	static TextureManager* Get();
};

