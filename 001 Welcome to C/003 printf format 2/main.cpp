/*
	printf % 기능 알아보기

	2	: binary
	5	: penta
	6	: hexa
	8	: octa
	10	: decimal
	16	: hexa - decimal

	10진수 : 7 8 9 10 11 12 13 14 15 16
	16진수 : 7 8 9 a  b  c  d  e  f  10
*/

#include <stdio.h>

void main()
{
	//진법별 정수 표현
	printf("10진수 = %d\n", 2014 - 100);

	printf("8진수 = %o\n", 2014 - 200 );
	printf("16진수 = %x\n", 2014);

	//실수 표현
	printf("실수 = %.4f\n", 3.14159);

	//문자 출력
	printf("단일 문자출력 = %c \n", 'Z');
	printf("문자열 출력 = %s \n", "Brazil Worldcup");
}


/*
	과제 ]] 

	printf 를 활용해서 그림 그리기

		★
	  ★★★
	★★★★★

*/