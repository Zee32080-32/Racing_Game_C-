#pragma once

#include "Texture.h"
#include "VertexBufferObject.h"

// Class for generating a xz plane of a given size
class Ctetrahedron
{
public:
	Ctetrahedron();
	~Ctetrahedron();
	void Create(string sDirectory, string sFilename);
	void Render();
	void Release();

private:
	UINT m_vao;
	GLuint vbo;

	//CVertexBufferObject m_vbo;
	CTexture m_texture;
	string m_directory;
	string m_filename;
	float m_width;
	float m_height;
}; 
