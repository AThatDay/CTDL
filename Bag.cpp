#include <assert.h>
#include "Bag.h"

int Bag::Occurr(const Item& element) const
{
	int count = 0;
	int i;
	for (i = 0; i < size; i++)
		if (data[i] == element)
			count++;
	return count;
}


void Bag::Insert(const Item& element)
{
	assert(Sum() < MAX);
	data[size] = element;
	size ++;
}
void Bag::Remove(const Item& element)
{
	int i;
	for (i = 0; (i < size) && (data[i]!= element); i ++);
	if (i == size)
		return;
	data[i] = data[size - 1];
		size--;
}
void Bag :: operator += (const Bag& B1)
{
	int i;
	int a = B1.size;
	assert(Sum() + B1.Sum() <= MAX);

	for (i = 0; i < a; i ++)
	{
		data[size] = B1.data[i];
		size ++;
	}
}
Bag& operator + (const Bag& B1, const Bag& B2)
{
	Bag B;
	assert(B1.Sum() + B2.Sum() <= Bag::MAX);
	B += B1;
	B += B2;
	return B;
}