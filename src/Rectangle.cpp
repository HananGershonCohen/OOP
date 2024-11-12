#include "Rectangle.h"
#include "Vertex.h"
#include <iostream>

using namespace std;

void Rectangle::initializeRectangle(const Vertex& bottomLeft, const Vertex& topRight)
{
    // בדיקה אם הערכים חוקיים
    if (bottomLeft.isValid() && topRight.isValid() &&
        topRight.isHigherThan(bottomLeft) && topRight.isToTheRightOf(bottomLeft))
    {
        m_bottomLeft = bottomLeft;
        m_topRight = topRight;
        m_width = m_topRight.m_col - m_bottomLeft.m_col;
        m_height = m_topRight.m_row - m_bottomLeft.m_row;
    }
    //else // אתחול לערכים ברירת מחדל
    //{
    //    m_bottomLeft.m_col = 20;
    //    m_bottomLeft.m_row = 10;
    //    m_topRight.m_col = 30;
    //    m_topRight.m_row = 20;
    //    m_width = m_topRight.m_col - m_bottomLeft.m_col;
    //    m_height = m_topRight.m_row - m_bottomLeft.m_row;
    //}
}

// use whith init_list.
Rectangle::Rectangle(const Vertex& bottomLeft, const Vertex& topRight)
    :m_bottomLeft(20,10),m_topRight(30,20),
    m_width(m_topRight.m_col - m_bottomLeft.m_col),
    m_height( m_topRight.m_row - m_bottomLeft.m_row)
{
    initializeRectangle(bottomLeft, topRight);
}

Rectangle::Rectangle(const Vertex vertices[2])
    :m_bottomLeft(20, 10), m_topRight(30, 20),
    m_width(m_topRight.m_col - m_bottomLeft.m_col),
    m_height(m_topRight.m_row - m_bottomLeft.m_row) {
    initializeRectangle(vertices[0], vertices[1]);
}

Rectangle::Rectangle(double x, double y, double width, double height) 
    :m_bottomLeft(20, 10), m_topRight(30, 20),
    m_width(m_topRight.m_col - m_bottomLeft.m_col),
    m_height(m_topRight.m_row - m_bottomLeft.m_row)
{
    Vertex bottomLeft(x, y);
    Vertex topRight(x + width, y + height);
    initializeRectangle(bottomLeft, topRight);
}

Rectangle::Rectangle(const Vertex& topRight, double width, double height)
    :m_bottomLeft(20, 10), m_topRight(30, 20),
    m_width(m_topRight.m_col - m_bottomLeft.m_col),
    m_height(m_topRight.m_row - m_bottomLeft.m_row)
{
    Vertex bottomLeft(topRight.m_col - width, topRight.m_row - height);
    initializeRectangle(bottomLeft, topRight);
}

Vertex Rectangle::getBottomLeft() const {
    return m_bottomLeft;
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

void Rectangle::draw(Board& board) const{

    // יצירת  ערכים זמניים ליצירת הקווים.
    Vertex bottemRight, topLeft;

    bottemRight.m_col = m_topRight.m_col;
    bottemRight.m_row = m_bottomLeft.m_row;
    topLeft.m_col = m_bottomLeft.m_col;
    topLeft.m_row = m_topRight.m_row;

    board.drawLine(m_bottomLeft, bottemRight); // under line.
    board.drawLine(topLeft, m_topRight);  // up line.
    board.drawLine(m_bottomLeft, topLeft);  // left line.
    board.drawLine(bottemRight, m_topRight);  // right line.
}

