#include <iostream>

using namespace std;

void main()
{
	// 문자입력
	char str[20] = {};

	// str 주소
	/*cin >> str;
	cout << str << endl;*/

	// 띄어쓰기 입력 처리
	cin.getline(str, 20);
	cout << str << endl;
}