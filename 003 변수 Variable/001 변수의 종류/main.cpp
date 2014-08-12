/*
	변수 Variable
	- 변할 수 있는 수
	- 상수, 변수를 담을 수 있는 공간 (방)
	- 변수마다 다른 크기를 갖는다.

	과제 ]]
			용도			크기? (byte)		범위?
	char	문자			1
	int		정수			4
	float	실수			4
	double	실수(더큰)	8
*/

#include <stdio.h>

int main()
{
	// char				: -128 ~ 127
	// unsigned char	: 0 ~ 255
	//변수타입	이름	
	char		num = 128;
	printf("num = %d\n", num);

	// int : - ??  ~  ??
	int			num2 = -2200000000;
	printf("num = %d\n", num2);

	// unsigned 는 정수형 데이터에 처리가능
	unsigned char unum = 130;
	printf("unum = %d\n", unum);

	unsigned short ushort = 65535;

	unsigned int unum2 = 2300000000;
	printf("unum2 = %u\n", unum2);

	// 실수형 데이터 타입은 unsigned 적용 안됨.
	unsigned float ufloat = 13.888888f;	
	unsigned double udouble = 13.999999;

	return 0;
}