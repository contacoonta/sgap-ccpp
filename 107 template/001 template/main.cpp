/*
	template _ function

	- Ʋ , ��Ʋ .. ���� Ÿ��(type) �������� ���� 
*/

#include <iostream>

using std::cout;
using std::endl;

#define TMPL	template < typename T >

TMPL
T ABS(T a);

void main()
{
	//absolute ���밪 ���ϱ� �Լ�
	auto a = ABS(-4);
	cout << "ABS = " << a << ", size = " << sizeof(a) << endl;

	auto b = ABS(-4.47f);
	cout << "ABS = " << b << ", size = " << sizeof(b) << endl;
	
	auto c = ABS(-6.12);
	cout << "ABS = " << c << ", size = " << sizeof(c) << endl;
}

TMPL
T ABS(T a)
{
	if (a < 0)
		a = -a;

	return a;
}