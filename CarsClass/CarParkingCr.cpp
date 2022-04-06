#include "CarPark.h"

CarPark::CarPark()
{
	name = "no name";
	count = 0;
	list = NULL;
}

CarPark::CarPark(string name)
{
	this->name = name;
	count = 0;
	list = NULL;
}

CarPark::CarPark(string name, Car* list, int count)
{
	this->name = name;
	this->count = count;
	this->list = list;
}

CarPark::~CarPark()
{
	if (list != NULL)
	{
		delete[] list;
	}
}

string CarPark::getName()
{
	return name;
}

void CarPark::setName(string name)
{
	this->name = name;
}

int CarPark::getCount()
{
	return count;
}

Car CarPark::get(int index)
{
	if (index < 0 || index >= count || list != NULL)
	{
		return Car("", "", 0, 0);
	}

	return list[index];
}

string CarPark::getInfo()
{
	if (list == NULL)
	{
		return "Car park " + name + " is empty";
	}

	string msg = "Car on the park " + name + ":\n";

	for (int i = 0; i < count; i++)
	{
		msg += list[i].getInfo() + "\n";
	}

	return msg;
}

void CarPark::add(Car car)
{
	if (list == NULL)
	{
		list = new Car[1];
		count = 1;
		list[0] = car;
	}
	else
	{
		Car* temp = new Car[count + 1];
		int i = 0;
		for (; i < count; i++)
		{
			temp[i] = list[i];
		}
		temp[i] = car;
		delete[] list;
		list = temp;
		count++;
	}
}