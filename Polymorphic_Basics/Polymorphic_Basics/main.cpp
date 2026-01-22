#include <iostream>
#include "Circle.h"

int main()
{
	Shape* shape = new Circle(5);
	Circle* circle = new Circle(5);

	// shape output
	std::cout << "Shapes Type:" << shape->GetType() << std::endl;
	std::cout << "Shapes Area:" << shape->CalculateArea() << std::endl;
	std::cout << "Shapes Sides:" << shape->GetSides() << std::endl;

	std::cout << "-----------------------------" << std::endl;

	// circle output
	std::cout << "Shapes Type:" << circle->GetType() << std::endl;
	std::cout << "Shapes Area:" << circle->CalculateArea() << std::endl;
	std::cout << "Shapes Sides:" << circle->GetSides() << std::endl;




	return 0;
}