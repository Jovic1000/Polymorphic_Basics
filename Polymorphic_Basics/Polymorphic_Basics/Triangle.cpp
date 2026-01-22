#include "Triangle.h"

float Triangle::CalculateArea()
{
	return (0.5 * m_hightLength * m_baseLength);
}

std::string Triangle::GetType()
{
	return "Triangle";
}

Triangle::Triangle(float hight, float base) : Shape(3), m_baseLength(base), m_hightLength(hight)
{
}