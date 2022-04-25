#pragma once
#include "Car.h"

class SuperCar : public Car
{
private:

public:
	SuperCar();
	SuperCar(string brand, string model, int cost, int age);
	~SuperCar();
};

