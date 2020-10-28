#include "MotorHome.h"

int main()
{
	MotorHome Go(LUXURY, 1, "Volvo", 10, 200.239);
	Go.display();

	MotorHome Gogo;
	Gogo.display();
}