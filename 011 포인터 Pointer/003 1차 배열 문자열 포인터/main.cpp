/*
	1차 배열 문자열 포인터
*/

#include <stdio.h>

void show(char * ps, int offset);
void show2(char ps[], int offset);

void main()
{
	char str[] = "Worldcup Winner ?";

	/*
		pstr 에 str 을 전달, pstr 을 출력 
		printf( pstr ) -> "Winner ?" 
	*/
	char * pstr = &str[9]; //str + 9;
	printf("%s\n", pstr);

	// 함수화 하기
	// offset -> 어디부터 출력할지 시작위치 이동
	show(str, 4);
	show2(str, 6);
}

void show(char *ps, int offset)
{
	printf("%s\n", ps + offset);
}

void show2(char ps[], int offset)
{
	printf("%s\n", &ps[offset]);
}