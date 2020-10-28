#pragma once
#include <string>
#include "Car.h"
#include "Home.h"

class MotorHome :
	public Car, public Home
{
private:
	CATEGORY cat;

public:
	MotorHome(CATEGORY = ECONOMY, long = 0, const std::string& = "", int = 0, double = 0.0);
	~MotorHome();
	void setCategory(CATEGORY);
	CATEGORY getCategory() const;
	void display() const override;


};
