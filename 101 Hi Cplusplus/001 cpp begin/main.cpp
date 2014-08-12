/*
	C plus plus
	C++

	:: scope resolution operator
	( 영역 연산자 )
*/

#include <iostream>

using namespace std;

int main()
{
	std::cout << "CPP로 처음 출력하기" << std::endl;
	std::cout <<
		"개행문자 확인 \n" << "\n";

	// using 이후에 cout 과 endl 은 
	// 그냥 cout , endl 사용하면 된다.
	using std::cout;
	using std::endl;

	enum week { Mo, Tu, We, Th, F};
	week::Mo;

	cout	<< "using 이후 cout" 
			<< endl;

	// cout 출력 담당 클래스
	// cin 입력 담당 클래스

	int ncarrot = 0;
	cout << "당근을 몇개 먹었습니까 ? ";
	// ncarrot 값
	cin >> ncarrot;
	cout << "당근 " << dec << ncarrot << " 개 먹었습니다." << endl;
	
	//당근을 16진수로 몇 개 먹었습니다.
	cout << "당근 " << hex << ncarrot << " 개 먹었습니다." << endl;

	//당근을 8진수로 몇 개 먹었습니다.
	cout << "당근 " << oct << ncarrot << " 개 먹었습니다." << endl;

	cout << dec << 10 << endl;


	//나누기 연산
	cout.precision(4);
	cout << 14.78f << " / " << 9 << " = " << 14.78f / 9 << endl;
}