#include "Car.h"

Car::Car()
{
	brand = "no brand";
	model = "no model";
	cost = 0;
	age = 0;
}

Car::Car(string brand, string model, int cost, int age)
{
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
	if (age >= 1886)
	{
		this->age = age;
	}
}

string Car::getInfo()
{
	return "Car brand: " + brand + "\nModel: " + model
		+ "\nAge: " + to_string(age) + "\nCost: " + to_string(cost) + "$";
}

