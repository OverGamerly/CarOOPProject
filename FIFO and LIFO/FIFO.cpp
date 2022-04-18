#include "FIFO.h"

void FIFO::add(int numb)
{
	int* temp = new int[count++];

	FIFO fifo;

	int i = 0;

	for (; i < count; i++)
	{
		temp[i] = array[i];
	}

	temp[i] = numb;
	delete[] array;
	array = temp;

	delete[] temp;

	count++;
}

string FIFO::get()
{
	string msg;

	for (int i = 0; i < count; i++)
	{
		msg += to_string(array[i]) + " ";
	}

	return msg;
}

void FIFO::remove()
{

}

void FIFO::clear()
{

}

void FIFO::empty()
{

}