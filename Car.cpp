#include <iostream>
#include "Car.h"

Car::Car(long n, const std::string& prod)
	: nr(n), producer(prod)
{
	std::cout << "\nCreating an object of type Car.";
}

Car::~Car()
{
	std::cout << "\nDestroying an object of type Car.";
}

long Car::getNr() const
{
	return nr;
}

void Car::setNr(long n)
{
	nr = n;
}

const std::string& Car::getProd() const
{
	return producer;
}

void Car::setProd(const std::string& p)
{
	producer = p;
}

void Car::display(void) const
{
	std::cout << "\nCar number: " << getNr()
		<< "\nProducer: " << getProd();
}
