#pragma once

#include "Vertex.h"

class Triangle
{
public:
	Triangle(const Vertex vertices[3]);

private:
	void initializeTriangle(const Vertex&, const Vertex&, const Vertex&);

	Vertex verBaseLeft, verBaseRight, verUp;

	};
