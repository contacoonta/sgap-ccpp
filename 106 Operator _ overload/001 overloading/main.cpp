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
	point(float x, float y) { fX = x; fY = y; }

public:

	point& add			(point& rp);
	point& operator+	(point& rp);

	void show		();
	void operator()	();

private:
	float fX = 0.0f;
	float fY = 0.0f;

}POINT;

void point::show()
{
	cout << "fX = " << fX << " , fY = " << fY << endl;
}

void point::operator()()
{
	show();
}

point& point::add(point& rp)
{
	fX = fX + rp.fX;
	fY = fY + rp.fY;

	return *this;
}

point& point::operator+(point& rp)
{
	return add(rp);
}

/*
*/
void main()
{
	POINT pt(1.2f, 7.8f);
	POINT pt2(5.5f, 6.6f);

	//pt = pt.add(pt2);	
	pt = pt + pt2;
	
	//pt.show();
	pt();


	//과제]
	//1. 멤버 변수가 서로 같은가 비교
	bool bflag = (pt == pt2);

	//2. 멤버 변수를 가져오기
	float fx = pt[0];
	float fy = pt[1];
			   pt[2]; <- 이건 안되게..

	//3. 부호 바꾸기 ( 양수 <-> 음수 )
	^pt;

}