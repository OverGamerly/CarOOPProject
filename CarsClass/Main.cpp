#include "MainHead.h"
#include "CarPark.h"

int main()
{
	CarPark carpark("10 Main Street");

	Car car1("Audi", "100 C3", 2500, 36);
	Car car2("BMW", "E34", 8000, 20);
	Car car3("Jeep", "Grand Cherokee", 5400, 28);
	Car car4("Honda", "Civik", 17500, 5);

	cout << car4.getInfo() << endl;

	carpark.add(car2);
	cout << carpark.getInfo() << endl;

	return 0;
}