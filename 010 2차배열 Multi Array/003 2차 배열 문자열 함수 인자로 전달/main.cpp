
#include <stdio.h>

void show1(char str[]);
void show2(char *str);

int main()
{

	//1차 배열 - 문자열
	char str1[] = "2014 Brazil Worldcup";

	show1(str1);	// []
	show2(str1);	// *


	//2차 배열 - 문자열
	char str2[][20] = {	"USA Washington",
						"CANADA Otawa",
						"AUSTRAILIA Canvara",
						"CHINA Beijing" };

	show3(str2);	// [] 활용
	show4(str2);	// * 활용

	return 0;
}

void show1(char str[])
{
	printf("%s\n", str);
}

void show2(char *str)
{
	printf("%s\n", str);
}



/*
	문자열 조합하기

	str1 누가 = "홍길동" "고길동" "어우동"
	str2 무엇을 해서 = "" 
	str3 어떻게 됐다 = " 잘 됐다" "부자가됐다" 

	랜덤하게 조합하기

*/