#include "Car.h"

int Car::count = 0;

Car::Car()
{
	brand = "no brand";
	model = "no model";
	cost = 0;
	age = 0;
}

Car::Car(string brand, string model, int cost, int age)
{
	count++;
	this->brand = brand;
	this->cost = cost;
	this->age = age;
	this->model = model;
}

Car::~Car()
{

}

void Car::setBrand(string brand)
{
	this->brand = brand;
}

void Car::setModel(string model)
{
	this->model = model;
}

void Car::setCost(int cost)
{
	if (cost > 0)
	{
		this->cost = cost;
	}
}

void Car::setAge(int age)
{
	if (age >= MIN_YEAR)
	{
		this->age = age;
	}
}

string Car::getInfo()
{
	return "-------CAR INFO------\nCar brand: " + brand + "\nModel: " + model
		+ "\nAge: " + to_string(age) + "\nCost: " + to_string(cost) + "$\n--------------------";
}

void Car::setNewCar()
{
	string brand;
	string model;
	int age;
	int cost;

	Car::setBrand(brand);
	Car::setModel(model);
}



