/*
	참조 ( reference )
	&	주소 표현
	&&	AND operator
	&	c++] reference
	- 변수의 이름대신 쓰는 대용이름 : 별명
	- 복사된 분신이지만 원본에 영향을 준다.

	- 값의 모양을 보이나, 주소의 역할을 한다.
*/

#include <iostream>

using namespace std;

void moneyExchange(int & r, int n);

void main()
{
	int money = 30;

	//1. pwallet 포인터 에 money 의 주소
	int * pwallet = &money;

	//2. rwallet 레퍼런스 에 money 의 값을 전달
	int & rwallet = money;

	cout << "rwallet = " << rwallet << endl;
	cout << "rwallet 주소 = " << &rwallet << endl
		<< "money 주소 = " << &money << endl;

	rwallet -= 10;

	cout << "money = " << money << endl;

	//3. rwallet 의 크기 ?
	cout << "rwallet 의 크기 = " << sizeof(rwallet) << endl;

	//4. 함수화 해보기
	moneyExchange(rwallet, 40);
	cout << "money = " << money << endl;
}

void moneyExchange(int & r, int n)
{
	r = n;
}