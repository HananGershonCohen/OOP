#include "Rectangle.h"
#include "Vertex.h"
#include <iostream>

using namespace std;
//void initializeRectangle(const Vertex& bottomLeft, const Vertex& topRight)
//{
//	// If the values ​​are valid, it will initialize according to the values ​​entered by the user
//	if (bottomLeft.isValid() && topRight.isValid() && topRight.isHigherThan(bottomLeft) && topRight.isToTheRightOf(bottomLeft))
//	{
//		m_bottomLeft.m_col = bottomLeft.m_col;
//		m_bottomLeft.m_row = bottomLeft.m_row;
//		m_topRight.m_col = bottomLeft.m_col;
//		m_topRight.m_row = bottomLeft.m_row;
//		m_width = m_topRight.m_col - m_bottomLeft.m_col;
//		m_height = m_topRight.m_row - m_bottomLeft.m_row;
//	}
//	else // else,  it will initialize according to the default.
//	{
//		m_bottomLeft.m_col = 20;
//		m_bottomLeft.m_row = 10;
//		m_topRight.m_col = 30;
//		m_topRight.m_row = 20;
//		m_width = m_topRight.m_col - m_bottomLeft.m_col;
//		m_height = m_topRight.m_row - m_bottomLeft.m_row;
//	}
//}

Rectangle::Rectangle(const Vertex& bottomLeft, const Vertex& topRight)
{
	//initializeRectangle(bottomLeft, topRight);
	// If the values ​​are valid, it will initialize according to the values ​​entered by the user
	if (bottomLeft.isValid() && topRight.isValid() && topRight.isHigherThan(bottomLeft) && topRight.isToTheRightOf(bottomLeft))
	{
		cout << "good" << endl;

		m_bottomLeft.m_col = bottomLeft.m_col;
		m_bottomLeft.m_row = bottomLeft.m_row;
		m_topRight.m_col = topRight.m_col;
		m_topRight.m_row = topRight.m_row;
		m_width = m_topRight.m_col - m_bottomLeft.m_col;
		m_height = m_topRight.m_row - m_bottomLeft.m_row;
	}
	else // else,  it will initialize according to the default.
	{
		cout << "not good" << endl;

		m_bottomLeft.m_col = 20;
		m_bottomLeft.m_row = 10;
		m_topRight.m_col = 30;
		m_topRight.m_row = 20;
		m_width = m_topRight.m_col - m_bottomLeft.m_col;
		m_height = m_topRight.m_row - m_bottomLeft.m_row;
	}
}

Rectangle::Rectangle(const Vertex vertices[2])
{
	Rectangle(vertices[0], vertices[1]);
	//initializeRectangle(vertices[0], vertices[1]);
}

Rectangle::Rectangle(double x, double y, double width, double height)
{
	Vertex bottomLeft, topRight;
	bottomLeft.m_col = x, bottomLeft.m_row = y;
	topRight.m_col = x + width;
	topRight.m_row = y + height;
	Rectangle(bottomLeft, topRight);
	//	initializeRectangle(bottomLeft, topRight);
}

Rectangle::Rectangle(const Vertex& topRight, double width, double height)
{
	Vertex bottomLeft;
	bottomLeft.m_col = topRight.m_col - width;
	bottomLeft.m_row = topRight.m_row - height;
	Rectangle(bottomLeft, topRight);
//	initializeRectangle(bottomLeft, topRight);
}

Vertex Rectangle::getBottomLeft() const {
	return  m_bottomLeft;
}

Vertex Rectangle::getTopRight() const {
	return m_topRight;
}

double Rectangle::getWidth() const {
	return m_width;
}

double Rectangle::getHeight() const {
	return m_height;
}