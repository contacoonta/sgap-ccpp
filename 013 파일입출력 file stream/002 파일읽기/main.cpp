/*
	파일 불러오기
*/

#include <stdio.h>

void main()
{
	FILE* pfile = nullptr;

	pfile = fopen("data.txt", "r");
	{
		//
		int buff = 0;
		while (buff != EOF )
		{
			// 문자를 한글자씩 읽어 온다.
			buff = fgetc(pfile);
			printf("%c", buff);
		}
	}
	fclose(pfile);
}