/*
	String Class
*/

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

//using std::wstring;

void main()
{
	/*char strArr[20] = "array string";

	strArr[0] = 'a';
	strArr[1] = 'n';*/
	//...	

	string str1 = "String Class";
	//wstring wstr2 = L"String Class";

	cout << str1 << endl;
	cout << "string class = " << str1 << endl;
	cout << "string class ���ڼ� = " << str1.length() << endl;

	// ���ڿ� �����
	str1 = "Another String !";
	cout << "string class = " << str1 << endl;
	cout << "string class ���ڼ� = " << str1.length() << endl;

	// ���ڿ� ���ϱ� 
	str1 += "Added String";
	cout << "string class = " << str1 << endl;
	cout << "string class ���ڼ� = " << str1.length() << endl;

	// �迭�� ȣȯ
	char arrStr[30] = {};

	strcpy(arrStr, str1.c_str() );

	cout << arrStr << endl;

	// str.find("str") ���° ��ġ�� �ִ��� ���
	// "a �� n ��° ��ġ�� �ִ�."
}

/*
	���� ]

	String class Ȱ��
	compare Ȱ�� or find Ȱ��

	c	: str [][10] = { "first", "second", "third" };
	c++ : string[5] = ....;

	�ټ����� �ܾ� �迭.
	___, ___, ___, ___, ___

	�Է� : ___ 
	�ش� �ܾ ����
*/