/*
	���� ( reference )
	&	�ּ� ǥ��
	&&	AND operator
	&	c++] reference
	- ������ �̸���� ���� ����̸� : ����
	- ����� �н������� ������ ������ �ش�.

	- ���� ����� ���̳�, �ּ��� ������ �Ѵ�.
*/

#include <iostream>

using namespace std;

void moneyExchange(int & r, int n);

void main()
{
	int money = 30;

	//1. pwallet ������ �� money �� �ּ�
	int * pwallet = &money;

	//2. rwallet ���۷��� �� money �� ���� ����
	int & rwallet = money;

	cout << "rwallet = " << rwallet << endl;
	cout << "rwallet �ּ� = " << &rwallet << endl
		<< "money �ּ� = " << &money << endl;

	rwallet -= 10;

	cout << "money = " << money << endl;

	//3. rwallet �� ũ�� ?
	cout << "rwallet �� ũ�� = " << sizeof(rwallet) << endl;

	//4. �Լ�ȭ �غ���
	moneyExchange(rwallet, 40);
	cout << "money = " << money << endl;
}

void moneyExchange(int & r, int n)
{
	r = n;
}