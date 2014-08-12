/*
	단일문자		'a' 'c' 'e'
	문자열		"worldcup"	문자열 끝 '\0' ( null 문자 )
*/

#include <stdio.h>

void show(char str[]);

void main()
{
	char a		= 'a';
	char strA[] = "a";	// "a" -> a\0	

	printf("size = %d, %d\n", sizeof(a), sizeof(strA));

	// 
	char strB[] = "Brazil vs Germany";
	show(strB);
}

void show(char str[])
{
	int i = 0;
	char ch = 0;

	while (true)
	{
		ch = str[i];

		printf("%c", ch);

		i++;

		// ch 가 null 문자면 탈출
		if (ch == '\0')
		{
			break;
		}
	}
}


/*

	한글자씩 타이핑해서 틀린부분의 개수 세기.

	예)
	주어진 문장	] a rolling stone gathers no moss
	타이핑		] a r_ll_ng s_one gathers no moss

	기본 ] 몇 글자가 틀렸습니다. :: ___

	확장 ] 타이핑 완료까지 걸린시간 :: ___


	참고 >> 띄어쓰기 포함한 문자열 입력
	scanf("%[^\n]", string);

*/
