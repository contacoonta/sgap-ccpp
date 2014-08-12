/*
	while 문 활용]

	1 부터 130까지 수 중에
	7의 배수는 몇개인가 ? __

	추가 ]] 7의 배수 출력.. 
*/

#include <stdio.h>

void main()
{
	int i = 1;
	int cnt = 0;

	while (i <= 130)
	{
		(i % 7 == 0) ? printf("i=%d\n", i) : 0;
		(i % 7 == 0) ? cnt++ : 0;
		
		i++;
	}//while()

	printf("7의 배수는 = %d\n", cnt);
}