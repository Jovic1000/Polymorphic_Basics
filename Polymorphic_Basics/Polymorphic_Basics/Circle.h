#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:

	float CalculateArea() override;
	std::string GetType() override;
	float GetCircumference();

	Circle(float radius);
private:
	float m_radius;
};

