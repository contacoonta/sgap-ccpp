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
	cout << "string class 글자수 = " << str1.length() << endl;

	// 문자열 덮어쓰기
	str1 = "Another String !";
	cout << "string class = " << str1 << endl;
	cout << "string class 글자수 = " << str1.length() << endl;

	// 문자열 더하기 
	str1 += "Added String";
	cout << "string class = " << str1 << endl;
	cout << "string class 글자수 = " << str1.length() << endl;

	// 배열과 호환
	char arrStr[30] = {};

	strcpy(arrStr, str1.c_str() );

	cout << arrStr << endl;

	// str.find("str") 몇번째 위치에 있는지 출력
	// "a 는 n 번째 위치에 있다."
}

/*
	과제 ]

	String class 활용
	compare 활용 or find 활용

	c	: str [][10] = { "first", "second", "third" };
	c++ : string[5] = ....;

	다섯개의 단어 배열.
	___, ___, ___, ___, ___

	입력 : ___ 
	해당 단어를 삭제
*/