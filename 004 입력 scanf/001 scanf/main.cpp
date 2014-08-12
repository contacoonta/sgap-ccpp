/*
	printf
	- 변수 나 상수 등.. 화면상에 출력.

	scanf
	- 키보드로 입력 받은 값을 변수에 전달.
	- 주의 : "%d "   " "포멧의 뒤는 반드시 붙여서 사용.
*/

#include <stdio.h>

int main()
{
	int nA = 5;
	printf("nA = %d\n", nA);

	nA = 11;
	printf("nA = %d\n", nA);

	// 1. 변수 nA 에 입력한 숫자를 대입
	/*scanf("%d", &nA);
	printf("nA = %d\n", nA);*/

	// 2. 한번에 두개의 데이터 입력
	int nB = 0;
	/*scanf("%d %d", &nA, &nB);
	printf("nA = %d, nB = %d\n", nA, nB);*/

	// 3. 실수 입력
	float fC = 0.0f;
	/*scanf("%f", &fC);
	printf("fC = %.2f \n", fC);*/

	// 4. 문자 하나 입력
	char chD = 0;
	printf("문자 하나를 입력 : ");
	scanf("%c", &chD);
	printf("입력한 문자 = %c\n", chD );
	printf("AsciiCode = %x\n", chD );
}