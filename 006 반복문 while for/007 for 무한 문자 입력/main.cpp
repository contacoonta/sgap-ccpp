/*
	연습 ] 무한 문자 입력

	for 문 활용 ] 무한 루프 돌리기

	'$' 가 입력되면 루프 종료
	아니면, 무한 루프 돌면서..
	입력한 문자를 출력.

	결과 ]]

	입력 : ___ 

	입력한 값은 = ___

	입력 : ___

	...

	입력 : $

	종료..... 
*/

#include <stdio.h>

void main()
{
	char ch = 0;

	//while (true)
	// $키 아니면, 루프 돌고..
	// $키 들어오면, 루프를 빠져나간다.
	//for (;ch != '$';)
	while (ch != '$')
	{
		printf("입력 : ");
		
		// flush 날려버리다. , stdin 키보드 입력 버퍼
		fflush(stdin);
		scanf("%c", &ch);

		printf("출력 = %c\n", ch);
	}
}