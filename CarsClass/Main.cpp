#include "MainHead.h"
#include "Cars.h"

int main()
{
	Cars cr;

	cr.setBrand("Audi");
	cr.setModel("100 C3");
	cr.setAge(1983);
	cr.setCost(2500);
	
	cout << cr.getInfo() << endl;

	return 0;
}