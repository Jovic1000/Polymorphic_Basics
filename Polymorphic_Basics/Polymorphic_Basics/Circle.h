#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:

	float CalculateArea();
	std::string GetType();
	void GetCircumference();

	Circle(float radius);
private:
	int m_radius;
};

