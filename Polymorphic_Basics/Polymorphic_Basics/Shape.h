#pragma once
#include <string>

class Shape
{
public:

	virtual float CalculateArea();
	virtual std::string GetType();
	void GetSides();

	Shape(int sides);
private:

	int m_sides;

};

