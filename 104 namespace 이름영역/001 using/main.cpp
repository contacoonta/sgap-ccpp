/*
	namespace 이름영역

	:: 범위 연산자 ( scope resolution operator )
*/

#include <iostream>

void main()
{
	//1. std::
	std::cout << "std::cout 형태 출력" << std::endl;

	//2. using std::
	using std::cout;
	using std::endl;

	cout << "더이상 std를 언급하지 않안도 cout , endl 사용 가능" << endl;

	//3. using namespace std
	using namespace std;
	cout << "std 이름영역을 모두 사용한다." << endl;

	int k = 0;
	cin >> k;
}