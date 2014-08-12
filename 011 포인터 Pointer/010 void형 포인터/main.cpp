/*
	void형 포인터
*/

#include <stdio.h>

void main()
{
	char	a = 3;
	int		b = 7;
	float	c = 7.89f;
	double	d = -14.3;

	void*	pa = &a;
	void*	pb = &b;
	void*	pd = &d;

	auto	aa = &a;
	auto	ab = &b;
	auto	ac = &c;
	auto	ad = &d;

	printf("%d\n", sizeof(pa));
	printf("%d\n", sizeof(pd));

	printf("pa 값 = %d\n", *((char*)pa));
	printf("pd 값 = %f\n", *((double*)pd));

	printf("aa 값 = %d\n", *aa);


}