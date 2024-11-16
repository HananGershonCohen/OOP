#pragma once
#include "Vertex.h"
#include "Utilities.h"
#include "Triangle.h"

class IsoscelesTriangle
{
public:
	IsoscelesTriangle(const Vertex vertices[3]);
	//IsoscelesTriangle(const Vertex& left, const Vertex& right, double height);
	
private:
	void initializeIsoscelesTriangle(const Vertex&, const Vertex&, const Vertex&);

	Triangle m_IsoscelesTriangle;

};

