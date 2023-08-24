#include "LListIterator.h"
;
template <class Item>
void LListIterator<Item> ::Add(const Item& x)
{
	assert(current != nullptr);
	LNode <Item>* Q = new LNode<Item>(x);
	if (current == LlistPtr-> Head)
	{
		Q -> next = LlistPtr -> Head;
		LlistPtr->Head = Q;
		pre = Q;
	}
	else {
		Q ->next = current;
		pre -> next = Q;
		pre = Q;
	}
	LlistPtr-> length ++;
}

template <class Item>
void LListIterator<Item> ::Remove()
{
	assert(current != nullptr);
	if (current == LlistPtr-> Head)
	{
		LlistPtr-> Head = current->next;
		delete current;
		current = LlistPtr->Head;
		if (LlistPtr->Head == nullptr)
			LlistPtr-> Tail = nullptr;
	}
	else {
		pre -> next = current -> next;
		delete current;
		current = pre -> next;
		if (current == nullptr)
			LlistPtr->Tail = pre;
	}
	LlistPtr->length --;
}
