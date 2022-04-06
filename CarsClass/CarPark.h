#pragma once
#include "MainHead.h"
#include "Car.h"

class CarPark
{
private:
	string name;
	int count;
	Car* list;
public:
	CarPark();
	CarPark(string name);
	CarPark(string name, Car* list, int count);
	~CarPark();

	string getName();
	void setName(string name);
	
	int getCount();
	Car get(int index);

	string getInfo();
};

