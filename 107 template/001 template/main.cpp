/*
	template _ function

	- 틀 , 형틀 .. 아직 타입(type) 정해지지 않은 
*/

#include <iostream>

using std::cout;
using std::endl;

#define TMPL	template < typename T >

TMPL
T ABS(T a);

void main()
{
	//absolute 절대값 구하기 함수
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