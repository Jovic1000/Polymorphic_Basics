#include "Square.h"

float Square::CalculateArea()
{
	return m_sideLength * m_sideLength;
}

std::string Square::GetType()
{
	return "Square";
}

Square::Square(float side) : Shape(4), m_sideLength(side)
{
}