#include "Circle.h"


Circle::Circle(float radius) : Shape(1), m_radius(radius)
{
}

float Circle::CalculateArea()
{
	return m_radius;
}

std::string Circle::GetType()
{
	return "Circle";
}

void Circle::GetCircumference()
{
}
