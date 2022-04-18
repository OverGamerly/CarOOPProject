#pragma once
#include "Header.h"

class FIFO
{
private:
	int* array = new int[NULL];
	int count = 0;
public:
	void add(int numb);
	void get(int index);
	void remove();
	void clear();
	void empty();
};

