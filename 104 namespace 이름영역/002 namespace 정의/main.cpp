/*
	namespace 정의
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

namespace CAT
{
	string name = "야옹이";

	void show()
	{
		cout << "고양이의 이름은 " << name << " 입니다." << endl;
	}
}


void show();

namespace CAT
{
	string girlfriendname = "야롱이";

	void show2()
	{
		cout << "고양이의 여자친구 이름은 " << girlfriendname << " 입니다." << endl;
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
	cout << "아무것도 없습니다." << endl;
}


