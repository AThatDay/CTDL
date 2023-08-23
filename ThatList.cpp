#include "ThatList.h"

template <class Item>
void List<Item> ::Append(const Item& x)
{
	assert(Length() < MAX);
	last ++;
	element[last] = x;
}

template <class Item>
void List<Item> ::Insert(const Item& x, int i)
{
	assert(Length() < MAX && 1 <= i && i <= Length());
	last ++;
	for (int k = last; k >= i; k --)
		element[k] = element[k - 1];
	element[i - 1] = x;
}

template <class Item>
void List<Item> ::Add(const Item& x)
{
	assert(Length() < MAX && Valid());
	last ++;
	for (int k = last; k > current; k --)
		element[k] = element[k - 1];
	element[current] = x;
	current ++;
}


template <class Item>
void List<Item> ::Delete(int i)
{
	assert(1 <= i && i <= Length());
	int tmp = i;
	for (tmp = i - 1 ; tmp < last; tmp++)
		element[tmp] = element[tmp + 1];
	last --;
}

template <class Item>
void List<Item> ::Remove()
{
	assert(Valid());
	for (int k = current; k < last; k ++)
		element[k] = element[k + 1];
	last --;
}
