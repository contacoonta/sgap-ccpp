/*
	namespace �̸�����

	:: ���� ������ ( scope resolution operator )
*/

#include <iostream>

void main()
{
	//1. std::
	std::cout << "std::cout ���� ���" << std::endl;

	//2. using std::
	using std::cout;
	using std::endl;

	cout << "���̻� std�� ������� �ʾȵ� cout , endl ��� ����" << endl;

	//3. using namespace std
	using namespace std;
	cout << "std �̸������� ��� ����Ѵ�." << endl;

	int k = 0;
	cin >> k;
}