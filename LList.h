#ifndef LLIST_H
#define LLIST_H

#include <assert.h>

#include "LNode.h"


template <class Item>
class LList
{
	//friend class LListIterator <Item>;
public:
	LList() // khởi tạo danh sách rỗng
	{
		Head = nullptr; Tail = nullptr; length = 0;
	}

	LList(const LList& L); // Hàm kiến tạo copy

	~LList(); // Hàm huỷ

	LList& operator = (const LList& L); // Toán tử gán.

	bool Empty() const
	{
		return length == 0;
	}

	int Length() const
	{
		return length;
	}

	void Insert(const Item& x, int i);
	// xen phần tử x vào vị trí thứ i trong danh sách

		void Append(const Item & x);
	// xen phần tử x vào đuôi danh sách

	void Delete(int i);
	// loại phần tử ở vị trí thứ i trong danh sách.

	Item& Element(int i);
	// trả về phần tử ở vị trí thứ i trong danh sách.
private:
	LNode <Item>* Head;
	LNode <Item>* Tail;
	int length;
};

#endif // !LLIST_H


