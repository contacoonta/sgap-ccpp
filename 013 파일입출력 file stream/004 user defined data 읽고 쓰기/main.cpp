/*
	User Defined Data 읽기 쓰기
	( 사용자 정의 데이터 )
	( 구조체 형 데이터 )
*/

#include <stdio.h>

typedef struct data
{
	int index;		// 데이터 순번
	char name[20];	// 네이밍
	int level;		// 캐릭터 레벨
	char job[20];	// 캐릭터 직업
}DATA;

void main()
{
	DATA dat1 = { 1, "Elsa", 95, "여왕 마법사" };

	FILE* pfile = nullptr;

	//1. 구조체 데이터 저장			//			  t : text ( ascii type )
	//pfile = fopen("udd.dat", "wb");	// w : write, b : binary
	//{
	//	fwrite(&dat1, sizeof(DATA), 1, pfile);
	//}
	//fclose(pfile);

	DATA dat2 = {};
	//2. 저장한 파일을 읽고, 구조체 dat2 에 데이터 넣고 화면에 출력.
	pfile = fopen("udd.dat", "rb");
	{
		fread(&dat2, sizeof(DATA), 1, pfile);
	}
	fclose(pfile);

	printf("index = %d\nname = %s\nlevel = %d\njob = %s\n",
		dat2.index, dat2.name, dat2.level, dat2.job);
}