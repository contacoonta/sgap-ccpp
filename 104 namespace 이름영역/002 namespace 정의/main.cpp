/*
	namespace ����
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

namespace CAT
{
	string name = "�߿���";

	void show()
	{
		cout << "������� �̸��� " << name << " �Դϴ�." << endl;
	}
}


void show();

namespace CAT
{
	string girlfriendname = "�߷���";

	void show2()
	{
		cout << "������� ����ģ�� �̸��� " << girlfriendname << " �Դϴ�." << endl;
	}
}



void main()
{
	::show();
	show();

	CAT::show();
	CAT::show2();
}

void show()
{
	cout << "�ƹ��͵� �����ϴ�." << endl;
}


