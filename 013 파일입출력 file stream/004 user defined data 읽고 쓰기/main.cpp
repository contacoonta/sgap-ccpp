/*
	User Defined Data �б� ����
	( ����� ���� ������ )
	( ����ü �� ������ )
*/

#include <stdio.h>

typedef struct data
{
	int index;		// ������ ����
	char name[20];	// ���̹�
	int level;		// ĳ���� ����
	char job[20];	// ĳ���� ����
}DATA;

void main()
{
	DATA dat1 = { 1, "Elsa", 95, "���� ������" };

	FILE* pfile = nullptr;

	//1. ����ü ������ ����			//			  t : text ( ascii type )
	//pfile = fopen("udd.dat", "wb");	// w : write, b : binary
	//{
	//	fwrite(&dat1, sizeof(DATA), 1, pfile);
	//}
	//fclose(pfile);

	DATA dat2 = {};
	//2. ������ ������ �а�, ����ü dat2 �� ������ �ְ� ȭ�鿡 ���.
	pfile = fopen("udd.dat", "rb");
	{
		fread(&dat2, sizeof(DATA), 1, pfile);
	}
	fclose(pfile);

	printf("index = %d\nname = %s\nlevel = %d\njob = %s\n",
		dat2.index, dat2.name, dat2.level, dat2.job);
}