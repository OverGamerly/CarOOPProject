#include "Dot.h"

int main()
{
	Dot dot1(3, 5);
	Dot dot2(4, 5);

	Dot dot = dot1 + dot2;
	Dot dot3 = dot1 - dot2;

	cout << dot3.getInfo() << endl;

	return 0;
}