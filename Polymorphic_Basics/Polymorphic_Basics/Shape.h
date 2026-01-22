#pragma once
#include <string>

class Shape
{
public:

	virtual float CalculateArea();
	virtual std::string GetType();
	virtual int GetSides();

	Shape(int sides);
private:

	int m_sides;

};

