#include "Shape.h"

float Shape::CalculateArea()
{

	return 0;
}

std::string Shape::GetType()
{

	return "Shape";
}

void Shape::GetSides()
{

}

Shape::Shape(int sides) : m_radius(sides)
{
}
