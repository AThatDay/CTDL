#ifndef LLISTITERATOR_H
#define LLISTITERATOR_H

#include <assert.h>
#include "LList.h"
#include "LNode.h"

template <class Item>
class LListIterator
{
public:
	LListIterator(const LList<Item>& L) // Hàm kiến tạo.
	{
		LlistPtr = &L; current = nullptr; pre = nullptr;
	}

	void Start()
	{
		current = LlistPtr->Head; pre = nullptr;
	}

	void Advance()
	{
		assert(current != nullptr); pre = current; 
		current = current -> next;
	}

	bool Valid()
	{
		return current != nullptr;
	}

	Item& Current()
	{
		assert(current!= nullptr); return current -> data;
	}

	void Add(const Item& x);
	void Remove();

private:
	const LList<Item>* LlistPtr;
	LNode<Item>* current;
	LNode<Item>* pre;
}

#endif // !LLISTITERATOR_H