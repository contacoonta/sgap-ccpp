/*
	함수 내부의 변수를 밖으로 반환

*/

#include <stdio.h>



char KeyInput();
int* LocalArray();

void main()
{
	//KeyInput 함수 만들기
	char chkey = KeyInput();
	printf("%c\n", chkey);

	//
	int* parr = LocalArray();
	for (int i = 0; i < 5; ++i)
	{
		printf("%d\n", parr[i]);
	}
}

char KeyInput()
{
	static char ch = 0;
	fflush(stdin);
	scanf("%c", &ch);
	return ch;
}

int* LocalArray()
{
	static int nums[] = { 11, 12, 13, 14, 15 };
	return nums;
}