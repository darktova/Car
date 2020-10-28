#include <iostream>
#include "MotorHome.h"

MotorHome::MotorHome(CATEGORY c, long n, const std::string& prod, int cnt, double s)
	: cat(c), Car(n, prod), Home(cnt, s)
{
	std::cout << "\nCreating an object of type MotorHome.";
}

MotorHome::~MotorHome()
{
	std::cout << "\nDestroying an object of type MotorHome.";
}

void MotorHome::setCategory(CATEGORY c)
{
	cat = c;
}

CATEGORY MotorHome::getCategory() const
{
	return cat;
}

void MotorHome::display() const
{
	Car::display();
	Home::display();
	std::cout << "\nCategory: " << cat;
}
