#include "Shape.h"

float Shape::CalculateArea()
{

	return 0;
}

std::string Shape::GetType()
{

	return "";
}

int Shape::GetSides()
{
	return m_sides;
}

Shape::Shape(int sides) : m_sides(sides)
{
}
