#ifndef THATLIST_H
#define THATLIST_H

# include <assert.h> 

template <class Item>
class List
{
public:
	static const int MAX = 50;
	List()
		// Khởi tạo danh sách rỗng.
	{
		last = -1; current = -1;
	}
	bool Empty() const
		// Kiểm tra danh sách có rỗng không.
		// Postcondition: Hàm trả về true nếu danh sách rỗng và false 
		// nếu không
	{
		return last < 0;
	}
	int Length() const
		// Xác định độ dài danh sách.
		// Postcondition: Trả về số phần tử trong danh sách.
	{
		return last + 1;
	}
	void Insert(const Item& x, int i);
	// Xen phần tử x vào vị trí thứ i trong danh sách.
	// Precondition: Length( ) < MAX và 1 ≤ i ≤ Length( )
	// Postcondition: các phần tử của danh sách kể từ vị trí thứ i 
	// được đẩy ra sau một vị trí, x nằm ở vị trí i.
	void Append(const Item& x);
	// Thêm phần tử x vào đuôi danh sách.
	// Precondition : Length( ) < MAX 
	// Postcondition : x là đuôi của danh sách.
	void Delete(int i);
		// Loại khỏi danh sách phần tử ở vị trí i.
		// Precondition: 1 ≤ i ≤ Length( )
		// Postcondition: phần tử ở vị trí i bị loại khỏi danh sách, 
		// các phần tử đi sau được đẩy lên trước một vị trí.
		Item & Element(int i) const
		// Tìm phần tử ở vị trí thứ i.
		// Precondition: 1 ≤ i ≤ Length( )
		// Postcondition: Trả về phần tử ở vị trí i.
	{
		assert(1 <= i && i <= Length()); return element[i - 1];
	}
	// Các hàm bộ công cụ lặp:

	void start()
		// Postcondition: vị trí hiện thời là vị trí đầu tiên của danh sách.
	{
		current = 0;
	}
	bool Valid() const
		// Postcondition: Trả về true nếu tại vị trí hiện thời có phần tử
		// trong danh sách, và trả về false nếu không.
	{
		return current >= 0 && current <= last;
	}
	void Advance()
		// Precondition: Hàm Valid( ) trả về true.
		// Postcondition: Vị trí hiện thời là vị trí tiếp theo trong danh 
		// sách. 
	{
		assert(Valid()); assert(Valid()); current ++;
	}
	Item& Current() const
		// Precondition: Hàm Valid( ) trả về true.
		// Postcondition: Trả về phần tử hiện thời của danh sách.
	{
		assert(Valid()); return element[current];
	}
	void Add(const Item& x);
	// Precondition: Length( ) < MAX và hàm Valid( ) trả về true
	// Postcondition: Phần tử x được xen vào trước phần tử
	// hiện thời, phần tử hiện thời vẫn còn là phần tử hịên thời.
	void Remove();
		// Precondition: hàm Valid( ) trả về true.
		// Postcondition: Phần tử hiện thời bị loại khỏi danh sách, 
		// phần tử đi sau nó trở thành phần tử hiện thời.
private:
	Item element[MAX];
	int last;
	int current;
};


#endif // THATLIST_H




