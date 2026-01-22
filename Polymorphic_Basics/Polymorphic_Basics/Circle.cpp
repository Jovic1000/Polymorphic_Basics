#include "Circle.h"
#include "Square.h"
#include "Triangle.h"


Circle::Circle(float radius) : Shape(1), m_radius(radius)
{
}

float Circle::CalculateArea()
{
	return  3.14 * (m_radius * m_radius);
}

std::string Circle::GetType()
{
	return "Circle";
}

float Circle::GetCircumference()
{
	return 3.14 * (m_radius * 2);
}


