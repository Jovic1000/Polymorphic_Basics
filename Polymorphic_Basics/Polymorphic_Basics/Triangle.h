#pragma once
#include "Shape.h"

class Triangle : public Shape
{
public:

	float CalculateArea() override;
	std::string GetType() override;
	float GetCircumference();

	Triangle(float hight, float base);
private:
	float m_hightLength;
	float m_baseLength;
};

