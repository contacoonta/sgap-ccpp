/*
	C plus plus
	C++

	:: scope resolution operator
	( ���� ������ )
*/

#include <iostream>

using namespace std;

int main()
{
	std::cout << "CPP�� ó�� ����ϱ�" << std::endl;
	std::cout <<
		"���๮�� Ȯ�� \n" << "\n";

	// using ���Ŀ� cout �� endl �� 
	// �׳� cout , endl ����ϸ� �ȴ�.
	using std::cout;
	using std::endl;

	enum week { Mo, Tu, We, Th, F};
	week::Mo;

	cout	<< "using ���� cout" 
			<< endl;

	// cout ��� ��� Ŭ����
	// cin �Է� ��� Ŭ����

	int ncarrot = 0;
	cout << "����� � �Ծ����ϱ� ? ";
	// ncarrot ��
	cin >> ncarrot;
	cout << "��� " << dec << ncarrot << " �� �Ծ����ϴ�." << endl;
	
	//����� 16������ �� �� �Ծ����ϴ�.
	cout << "��� " << hex << ncarrot << " �� �Ծ����ϴ�." << endl;

	//����� 8������ �� �� �Ծ����ϴ�.
	cout << "��� " << oct << ncarrot << " �� �Ծ����ϴ�." << endl;

	cout << dec << 10 << endl;


	//������ ����
	cout.precision(4);
	cout << 14.78f << " / " << 9 << " = " << 14.78f / 9 << endl;
}