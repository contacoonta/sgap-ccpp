/*
	생성자 & 소멸자 , 파괴자 ( Constructor & Destructor )
	- 생성자 : Class 객체를 생성하면, 가장 먼저 실행.
	- 소멸자 : Class 객체가 사라질때, 가장 나중에 실행.

	- 생성자 와 솔멸자는 클래스의 이름과 동일하다.
		~ (tilde) 소멸자의 앞에 붙인다.
	- 생성자 와 소멸자는 반환값이 없다. ( return 없다. )
	- 생성자 와 소멸자는 생성시 생성자가, 소멸시 소멸자가 자동 호출된다.

	- 생성자는 클래스 내부의 데이터를 초기화 할때 사용
	- 소멸자는 클래스 내부의 데이터를 뒷정리 할때 사용
*/

#include <iostream>

using std::cout;
using std::endl;

class Point
{
public:
	Point();
	~Point();

	void SetPoint(int nx, int ny);	//멤버함수
	void Show();

private:
	int x;	//멤버변수 ( member variable )
	int y;
};

Point::Point()
{
	cout << "--- 생성자 호출 ---" << endl;

	// 클래스 멤버변수
	x = 0;
	y = 0;
}

Point::~Point()
{
	cout << "--- 소멸자 호출 ---" << endl;
}

void Point::SetPoint(int nx, int ny)
{
	x = nx;
	y = ny;
}

void Point::Show()
{
	cout << "x = " << x << " , " << "y = " << y << endl;
}



void main()
{
	Point pos;

	cout << "--- 메인함수 에서 호출 ---" << endl;
	
	//pos 내부에 함수를 만들어서 -> ( 5,6 )
	// SetPoint( 5, 6 )
	
	pos.SetPoint(5, 6);
	pos.Show();

	pos.SetPoint(-4, 59);
	pos.Show();

	// ShowPoint();
	// posX = ? , posY = ? 출력..

}