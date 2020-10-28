#pragma once
#include <string>

class Car // Base class
{
private:
	long nr;
	std::string producer;

public:
	// Constructor:
	Car(long = 0L, const std::string& = "");
	virtual ~Car();
	// Access methods:
	long getNr(void) const;
	void setNr(long);
	const std::string& getProd() const;
	void setProd(const std::string&);
	virtual void display(void) const; // Display a car

};
