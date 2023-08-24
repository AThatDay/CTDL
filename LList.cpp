#include "LList.h"
template <class Item>

LList<Item>::LList(const LList<Item>& L)
{
	if (L.Empty())
	{
		Head = Tail = nullptr; length = 0;
	}
	else {
		Head = new LNode <Item>(L.Head->data);
		Tail = Head;
		LNode <Item>* P;
		for (P = L.Head->next; P != nullptr; P = P->next)
			Append(P->data);
		length = L.length;
	}
}

template <class Item>
LList <Item> :: ~LList()
{
	if (Head != nullptr)
	{
		LNode <Item>* P;
		while (Head != nullptr)
		{
			P = Head;
			Head = Head -> next;
			delete P;
		}
		Tail = nullptr;
		length = 0;
	}
}

template <class Item>
void LList <Item> ::Append(const Item& x)
{
	LNode <Item>* Q = new LNode <Item>(x);
	if (Empty())
	{
		Head = Tail = Q;
	}
	else {
		Tail->next = Q;
		Tail = Q;
	}
	length ++;
}

template <class Item>
void LList<Item> ::Insert(const Item& x, int i)
{
	assert(i >= 1 && i <= length);
	LNode <Item>* Q = new LNode<Item>(x);
	if (i == 1) // xen vào đầu DSLK.
	{
		Q -> next = Head;
		Head = Q;
	}
	else {
		LNode <Item>* P = Head;
		for (int k = 1; k < i - 1; k ++)
			P = P -> next;
		Q -> next = P -> next;
		P -> next = Q;
	}	
	length ++;
}

template <class Item>
void LList <Item> ::Delete(int i)
{
	assert(i >= 1 && i <= length);
	LNode<Item>* P;
	if(i == 1) // Loại đầu DSLK
	{
		P = Head;
		Head = Head -> next;
		delete P;
		if (Head == nullptr) Tail = nullptr;
	}
	else {
		P = Head;
		for (int k = 1; k < i - 1; k ++)
			P = P -> next;
		LNode <Item>* Q;
		Q = P -> next;
		P ->next = Q -> next;
		delete Q;
		if (P -> next == nullptr) Tail = P;
	}
	length --;
}

template <class Item>
Item& LList <Item> ::Element(int i)
{
	assert(i >= 1 && i <= length);
	LNode <Item>* P = Head;
	for (int k = 1; k < i; k ++)
		P = P -> next;
	return P -> data;
}



