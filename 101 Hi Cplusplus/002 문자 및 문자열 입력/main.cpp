#include <iostream>

using namespace std;

void main()
{
	// �����Է�
	char str[20] = {};

	// str �ּ�
	/*cin >> str;
	cout << str << endl;*/

	// ���� �Է� ó��
	cin.getline(str, 20);
	cout << str << endl;
}