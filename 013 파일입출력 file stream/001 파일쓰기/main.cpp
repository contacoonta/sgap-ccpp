/*
	���� �����ϱ�
	fopen()
	fclose()
*/

#include <stdio.h>

int main()
{
	FILE* pfile = nullptr;

	//1. ������ ����
	// data.txt �� ���� ( "w" )
	pfile = fopen("data.txt", "w");
	{
		//3. �ѱ��ھ� ����
		fputc('M', pfile);
		// My name

		fputs("July\n 22\n", pfile);

		//My Age : %d , Weight : %d 
		fprintf(pfile, "My age : %d, Weight : %d\n", 3, 40);

	}
	//2. ������ �ݴ´�.
	fclose(pfile);

	return 0;
}