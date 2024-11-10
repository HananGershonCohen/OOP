#pragma once
#include <Vertex.h>
#include <macros.h>

class Rectangle
{
public:
	Rectangle(const Vertex& bottomLeft, const Vertex& topRight);
	Rectangle(const Vertex vertices[2]);
	Rectangle(double x, double y, double width, double height);
	Rectangle(const Vertex& topRight, double width, double height);

	
	Vertex getBottomLeft() const;
	Vertex getTopRight() const;
	double getWidth() const;
	double getHeight() const;
	
	//void initializeRectangle(const Vertex& bottomLeft, const Vertex& topRight);

private:
	Vertex m_bottomLeft, m_topRight;
	double m_width, m_height;
};


