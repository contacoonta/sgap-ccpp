/*
	상수의 데이터 크기
	- sizeof : 데이터의 크기를 byte 로 반환
	- 1byte = 8bit
*/

#include <stdio.h>

int main()
{
	//1. 정수의 크기 알아보기 4byte
	printf("정수 %d 의 크기 = %d\n", 51, sizeof(51));

	//2. 실수의 크기 알아보기 ( 3.14 ) 8byte, 4byte
	printf("실수 %.3f 의 크기 = %d\n", 3.14, sizeof(3.14));
	printf("실수 %.1f 의 크기 = %d\n", 3.14f, sizeof(3.14f));

	//3. 단일 문자의 크기 ( 'i' ) 1byte
	printf("단일문자 %c 의 크기 = %d\n", 'i', sizeof('i'));

	//4. 문자열 의 크기 ( "ai" ); 1 +1 byte
	// 문자열의 끝에는 '\0' Null문자가 들어있다. 
	printf("문자열 %s 의 크기 = %d\n", "ai", sizeof("ai"));

	return 0;
}