// 주석1 : 컴파일되지 않는 부연설명
// 한줄에 대해서만 주석처리

/* 
	주석2 : 주석의 영역
	시작부분 부터 끝 안에 존재하는 부분
	- 여러줄을 주석처리 할때
*/

/*
	printf \ back slash 기능 살펴보기
*/
#include <stdio.h>

void main()
{
	//printf("경고음 소리 \a \a \a");
	printf("백스페이스\b\n");
	printf("폼피드\f\n");

	printf("개행문자\n");

	printf("캐리지리턴\r\n");	
	printf("역슬래시 출력 \\\n");
	printf("큰따옴표\" \" \n");
}