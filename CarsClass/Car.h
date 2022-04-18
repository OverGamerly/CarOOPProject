#pragma once
#include "MainHead.h"

class Car
{
private:
	string brand;
	string model;
	int cost;
	int age;
	static int count;
public:
	static const int MIN_YEAR = 0;

	static int getCount()
	{
		return count;
	}

	Car();
	Car(string brand, string model, int cost, int age);
	~Car();
	void setBrand(string brand);
	void setModel(string model);
	void setCost(int cost);
	void setAge(int age);
	int getAge();
	int getCost();
	string getBrand();
	string getModel();
	string getInfo();
	void setNewCar();

};