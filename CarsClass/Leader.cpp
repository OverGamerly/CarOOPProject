#include "Leader.h"

int Leader::count = 0;

Leader::Leader()
{
	brand = "no brand";
	model = "no model";
	cost = 0;
	age = 0;
}

Leader::Leader(string brand, string model, int cost, int age)
{
	count++;
	this->brand = brand;
	this->cost = cost;
	this->age = age;
	this->model = model;
}

Leader::~Leader()
{

}

void Leader::setBrand(string brand)
{
	this->brand = brand;
}

void Leader::setModel(string model)
{
	this->model = model;
}

void Leader::setCost(int cost)
{
	if (cost > 0)
	{
		this->cost = cost;
	}
}

void Leader::setAge(int age)
{
	if (age >= MIN_YEAR)
	{
		this->age = age;
	}
}

string Leader::getInfo()
{
	return "-------CAR INFO------\nCar brand: " + brand + "\nModel: " + model
		+ "\nAge: " + to_string(age) + "\nCost: " + to_string(cost) + "$\n--------------------";
}

void Leader::setNewCar()
{
	/*string brand;
	string model;
	int age;
	int cost;

	Car::setBrand(brand);
	Car::setModel(model);*/
}

int Leader::getAge()
{
	return age;
}

