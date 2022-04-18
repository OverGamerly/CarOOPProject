#include "FIFO.h"

int main()
{
	FIFO fifo;

	fifo.add(5);

	cout << fifo.get() << endl;

	return 0;
}