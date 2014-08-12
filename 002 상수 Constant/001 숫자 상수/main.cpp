/*
	상수 Constant , Literal
	- 변하지 않는 수

	숫자 상수	정수			1, -2, 0
				실수			3.14 , 9.8
	문자 상수	단일문자		'a' , 'b'
				문자열		"Worldcup"
*/

#include <stdio.h>

void main()
{
	// 1. 정수형 상수 ( %d )
	// 9 + 14 = ? 를 printf 로 출력하기
	printf("%d + %d = %d\n", 9, 14, 9+14);

	// 2. 실수형 상수 ( %f )
	// 6.23 - 7.21 = ? 르 printf 로 출력하기
	printf("%.2f - %.2f = %.2f\n", 6.23f, 7.21f, 6.23f - 7.21f);

	// 3. 문자 상수 - 단일문자  ( %c )
	// 'a' 'l' 'g' 'e' 'r' 'i' 'e'
	printf("%c %c %c... %d : %d \n", 'A', 'l', 'g', 4, 2);

	// 4. 문자 상수 - 문자열 ( %s )
	// "Belgium" X "vs" X "Korea"
	printf("%s %d %s %d %s\n", "Belgium", 5, "vs", 6, "Korea");
}