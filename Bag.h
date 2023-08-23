#ifndef BAG_H
#define BAG_H

#include <iostream>

using namespace std;

class Bag
{
public:

	static const int MAX = 50;

	typedef int Item;

	Bag() { size = 0; }

	int Sum() const
	{
		return size;
	}
	int Occurr(const Item& element) const;
	void Insert(const Item& element);
	void Remove(const Item& element);
	void operator += (const Bag& B1);
	friend Bag& operator + (const Bag& B1, const Bag& B2);


private:
	Item data[MAX];
	int size;
};

class Shape
{
public:
	Shape(const string& s = "")
		: name(s) { }
	~Shape() { }
	//virtual double Perimeter() const = 0;
		//virtual double Area() const = 0;
	bool operator <=(const Shape& sh) const
	{
		//return Area() <= sh.Area();
	}
	/*virtual void Print(ostream& out = cout) const
	{
		out << name << "of area" << Area();
	}*/
private:
	string name;
};


#endif

