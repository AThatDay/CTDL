#ifndef LNODE_H
#define LNODE_H

template <class Item>
class LNode
{
	LNode(const Item& value)
	{
		data = value; next = nullptr;
	}
	Item data;
	LNode* next;
	//friend class LList<Item>;
	//friend class LListIterator<Item>;
};

#endif // !LNODE_H
