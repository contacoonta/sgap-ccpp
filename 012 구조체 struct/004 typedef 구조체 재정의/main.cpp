/*
	typedef ( type define )
	- 기존의 데이터형을 재정의 한다.
*/

#include <stdio.h>

//1.
typedef unsigned int UINT;

//2. #define 데이터형이 아니라도 재정의 할 수 있다.
//   모든형을 다 재정의 할 수 있다.
#define kkkk unsigned int

//3. #define 으로 상수를 정의 하려면, 
//   const 형 상수로 정의 하는게 좋다.
#define PI 3.141592
const float fPI = 3.141592f;


typedef struct point
{

}POINT;

typedef POINT pOINt;

int main()
{
	point p1;
	POINT p2;
	pOINt p3;

	kkkk n = 1000;
	float f = fPI;

	return 0;
}
