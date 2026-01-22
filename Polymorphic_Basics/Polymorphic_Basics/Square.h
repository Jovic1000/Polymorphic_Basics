#pragma once
#include "Shape.h"

class Square : public Shape
{
public:

	float CalculateArea() override;
	std::string GetType() override;
	float GetCircumference();

	Square(float side);
private:
	float m_sideLength;
};

