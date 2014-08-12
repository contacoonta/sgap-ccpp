/*
	Pointer :
*/

#include <stdio.h>

void setFloat(float * pf, float f);

void main()
{
	char ch	= 's';
	char *pch = &ch;

	printf("ch 의 값 = %c, 주소 = %p\n", ch, &ch);
	printf("pch 의 값 = %p\n", pch);
	printf("pch 의 주소 = %p\n", &pch);

	printf("pch 를 통한 ch 의 값 = %c\n", *pch);

	*pch = 't';

	printf("ch 의 값 = %c\n", ch);

	printf("ch 의 크기 = %d\n", sizeof(ch));
	printf("pch 의 크기 = %d\n", sizeof(pch));

	//
	float fnum = 3.14f;
	float * pfnum = &fnum;
	// pfnum 에 5.12f
	// fnum 확인
	
	setFloat(pfnum, 9.18f);
	printf("fnum = %f\n", fnum);;
}

void setFloat(float * pf, float f)
{
	*pf = f;
}