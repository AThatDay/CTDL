# include <math.h> 
#include <iostream>
#include "Complexa.h"
#include "Bag.h"

using namespace std;


template <class Item>
void Swap(Item& x, Item& y)
// Item cần phải là kiểu bất kỳ có sẵn trong C + + (int, char, …)
// hoặc là lớp có hàm kiến tạo mặc định và toán tử gán.
{
	Item temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	//Complex A(3.2, 5.7);
	//Complex B(6.3, -4.5);
	//
	//cout << "Phần thực của số phức A : "<< A.GetReal() << endl;
	//cout << "Phần ảo của số phức A : " << A.GetImag() << endl;
	//A = A + B;
	//cout << A << endl; // In ra số phức A.

	/*double x = 4.2;
	double y = 3.6;
	Swap(x, y);

	cout << x << endl;

	Shape bag1("thatle");*/

	system("pause");
	return 0;
}
// Sau đây là cài đặt các hàm đư khai báo trong lớp Complex
