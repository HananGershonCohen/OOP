#include "IsoscelesTriangle.h"
//#pragma once
//#include "IsoscelesTriangle.h"

void IsoscelesTriangle::initializeIsoscelesTriangle(const Vertex& ver1, const Vertex& ver2, const Vertex& ver3)
{
	double BClength = (distance(ver2, ver3));
	double CAlength(distance(ver3, ver1));

	if (!doubleEqual(BClength, CAlength))
	{
		m_IsoscelesTriangle = { Vertex(20, 20), Vertex(30, 20), Vertex(25, 20 + sqrt(75)) };
	}
}
//
//
//IsoscelesTriangle::IsoscelesTriangle(const Vertex vertices[3]) :
//	m_verBaseLeft(20, 20), m_verBaseRight(30, 20), m_verUp(25, 20 + sqrt(75)),
//	m_ABlength(distance(m_verBaseLeft, m_verBaseRight)),
//	m_BClength(distance(m_verBaseRight, m_verUp)),
//	m_CAlength(distance(m_verUp, m_verBaseLeft))
//{
//	initializeIsoscelesTriangle(vertices[0], vertices[1], vertices[2]);
//}
//
//IsoscelesTriangle::Triangle(const Vertex& left, const Vertex& right, double height)
//{
//	double colCenter = (right.m_col - left.m_col) / 2;
//	double rowCenter = (left.m_row + (height));
//	Vertex verCenter{ colCenter,rowCenter };
//	Triangle(left, right, (verCenter));
//}
//

IsoscelesTriangle::IsoscelesTriangle(const Vertex vertices[3]) 
	:m_IsoscelesTriangle(Triangle(vertices[0], vertices[1], vertices[2]))
{
	initializeIsoscelesTriangle(
		m_IsoscelesTriangle.getVertex(0), 
		m_IsoscelesTriangle.getVertex(1),
		m_IsoscelesTriangle.getVertex(2));
}

//IsoscelesTriangle::IsoscelesTriangle(const Vertex& left, const Vertex& right, double height)
//{
//
//}
