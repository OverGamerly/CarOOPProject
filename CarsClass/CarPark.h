#pragma once
#include "MainHead.h"
#include "Car.h"

class CarPark
{
	friend class Manager;
	
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

	Car get(int index);

	string getInfo();
	int getCount();
	void add(Car car);
	void deleteCar(int index);
};

