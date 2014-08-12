/*
	do while ]
	AsciiCode 출력기

	'!' 문자 나오면 종료

	입력 : 문자
	출력 : 해당 AsciiCode 출력
*/

#include <stdio.h>
void main()
{
	char ch = 0;
	do
	{
		fflush(stdin);
		scanf("%c", &ch);

		printf("Ascii code = 0x%x\n", ch);

	} while ( ch != '!' );
}