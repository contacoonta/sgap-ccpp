/*
	2차 배열 문자열 포인터
*/
#include <stdio.h>

int main()
{
	char* pstr[4] = {};

	char Brazil[] = "Brazil";
	char Holland[] = "Holland";
	char German[] = "German";
	char Argentina[] = "Argentina";

	pstr[0] = Brazil;
	pstr[1] = Holland;
	pstr[2] = German;
	pstr[3] = Argentina;

	printf("%s\n", pstr[1]);

	char USA[] = "USA";
	pstr[1] = USA;

	printf("%s\n", pstr[1]);

	return 0;
}

/*
	과제 ]] 월드컵 우승... 인정할 수 없다..

	1라운드 [] [] [] []  [] [] [] []	char* pQuaterFinal[8] = ???
	2라운드   []   []	  []   []	char* pSemiFinal[4] = ???
	3라운드      []   	     []		char* pFinal[2] = ???
	4라운드            []			char* pWinner = ???
*/