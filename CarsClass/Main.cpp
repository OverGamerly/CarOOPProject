#include "MainHead.h"
#include "CarPark.h"

int main()
{
	CarPark carpark("10 Main Street");

	Car car1("Audi", "100 C3", 2500, 36);
	Car car2("BMW", "E34", 8000, 20);
	Car car3("Jeep", "Grand Cherokee", 5400, 28);
	Car car4("Honda", "Civik", 17500, 5);

	carpark.add(car4);
	carpark.add(car3);
	carpark.add(car1);
	carpark.add(car2);

	cout << carpark.getInfo() << endl;

	cout << Car::getCount() << endl;

	return 0;
}