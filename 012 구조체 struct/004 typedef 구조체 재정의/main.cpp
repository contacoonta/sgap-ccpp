/*
	typedef ( type define )
	- ������ ���������� ������ �Ѵ�.
*/

#include <stdio.h>

//1.
typedef unsigned int UINT;

//2. #define ���������� �ƴ϶� ������ �� �� �ִ�.
//   ������� �� ������ �� �� �ִ�.
#define kkkk unsigned int

//3. #define ���� ����� ���� �Ϸ���, 
//   const �� ����� ���� �ϴ°� ����.
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
