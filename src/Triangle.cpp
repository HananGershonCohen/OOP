#include "Triangle.h"

void Triangle::initializeTriangle(const Vertex& ver1, const Vertex& ver2, const Vertex& ver3)
{
	if (ver1.isValid() && ver2.isValid() && ver3.isValid() && ver2.isParallelXAxis(ver1))
	{
		verBaseLeft = ver1;
		verBaseRight = ver2;
		verUp = ver3;
	}
	else
	{
		verBaseLeft.m_col = verBaseLeft.m_row = 20;
		verBaseRight.m_col = 30;
		verBaseRight.m_row = 20;
		verUp.m_col = 25;
		verUp.m_row = 20 + sqrt(75);
	}
}


Triangle::Triangle(const Vertex vertices[3])
{
	initializeTriangle(vertices[0], vertices[1], vertices[2]);
}

