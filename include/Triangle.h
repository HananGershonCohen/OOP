#pragma once

#include "Vertex.h"

class Triangle
{
public:
	Triangle(const Vertex vertices[3]);
	Triangle(Vertex v0, Vertex v1, Vertex v2);

private:
	void initializeTriangle(const Vertex&, const Vertex&, const Vertex&);

	Vertex m_mverBaseLeft, m_verBaseRight, m_verUp;

	};
