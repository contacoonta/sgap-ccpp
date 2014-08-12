/*
	파일 저장하기
	fopen()
	fclose()
*/

#include <stdio.h>

int main()
{
	FILE* pfile = nullptr;

	//1. 파일을 연다
	// data.txt 에 저장 ( "w" )
	pfile = fopen("data.txt", "w");
	{
		//3. 한글자씩 저장
		fputc('M', pfile);
		// My name

		fputs("July\n 22\n", pfile);

		//My Age : %d , Weight : %d 
		fprintf(pfile, "My age : %d, Weight : %d\n", 3, 40);

	}
	//2. 파일을 닫는다.
	fclose(pfile);

	return 0;
}