/*
	���� �ҷ�����
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
			// ���ڸ� �ѱ��ھ� �о� �´�.
			buff = fgetc(pfile);
			printf("%c", buff);
		}
	}
	fclose(pfile);
}