/*
	Operator 연산자 
	Overloading 재정의

	- 함수를 연산자의 형태로 변환
	- 알기쉽다. 직관적.
*/

#include <iostream>
using std::cout;
using std::endl;

typedef class point
{
public:
	//생성자1
	point() :
		fX(1.0f), fY(1.0f)
	{
		cout << "--- constructor 1 ---" << endl;
	}

	//생성자2
	point(point & p)
	{
		cout << "--- constructor 2 ---" << endl;
		//1.
		/*fX = p.fX;
		fY = p.fY;*/

		//2.
		*this = p;
	}

	//생성자3 : 생성자 호출과 동시에 초기화
	point(float x, float y)
	{
		cout << "--- constructor 3 ---" << endl;
		fX = x;
		fY = y;
	}

	~point() 
	{
		cout << "--- destructor 1 ---" << endl;
	}

public:
	void show();

private:
	float fX = 2.0f;
	float fY = 2.0f;

}POINT;



void point::show()
{
	cout << "fX = " << fX << " , fY = " << fY << endl;
}

/*
*/
void main()
{
	//생성자1
	POINT pt;
	pt.show();

	//생성자3
	POINT pt1(4.2f, 7.4f);
	pt1.show();
	
	//생성자2
	POINT* pt2 = new POINT(pt1);
	pt2->show();
	delete pt2;
}