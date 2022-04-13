#include "MainHead.h"
#include "CarPark.h"


int main()
{
	CarPark carpark("10 Main Street");

	Car car("Nissan", "Skyline r32", 32000, 5);

	cout << car.getInfo() << endl;

	cout << carpark.getInfo() << endl;

	cout << Car::getCount() << endl;

	return 0;
}