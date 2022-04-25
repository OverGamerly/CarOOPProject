#pragma once
#include "MainHead.h"

class Leader 
{
private:
	string brand;
	string model;
	string uniqeCode;
	string headHuman;
	int cost;
	int age;
	static int count;
public:
	static const int MIN_YEAR = 0;

	static int getCount()
	{
		return count;
	}

	Leader();
	Leader(string brand, string model, int cost, int age);
	~Leader();
	void setBrand(string brand);
	void setModel(string model);
	void setCost(int cost);
	void setAge(int age);
	void setCode(string uniqeCode);
	void setHuman(string headHuman);
	int getAge();
	int getCost();
	string getBrand();
	string getModel();
	string getInfo();
	string getCode();
	string getHuman();
	void setNewCar();;

};

