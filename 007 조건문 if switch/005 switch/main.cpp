/*
	switch( 결과 )		if ( 조건1 )
	{					{
	case 경우1:
		실행..
		break;			}

	case 경우2:			else if ( 조건 2 )
		실행..			{
		break;			}

	default:			else
		실행..			{
		break;			}
	}
*/

#include <stdio.h>

void main()
{
	char nSelect = 0;

	printf("종족 선택 ]] \n");
	printf("1.테란 2.플토 3.저그 x.랜덤 : ");

	scanf("%c", &nSelect);

	// switch 문  참, 거짓 판단은 끝나고 경우별 처리.
	// switch 숫자, 문자 하나에 대해서 처리 가능.
	switch (nSelect)
	{
	case '1':
		printf("1번 : 테란 선택\n");
		break;

	case '2':
		printf("2번 : 플토\n");
		break;

	case '3':
		printf("3번 : 저그\n");
		break;

	case '4':
	case 'x':
		printf("x : 랜덤\n");
		break;

	default:
		printf("잘못된 선택\n");
		break;

	}//switch
}

/*	
	과제 ]]

	#include <conio.h>
	kbhit() , getch()

	무한루프...
	{
		A, a 입력 -> "Attack~~~!"
		S, s 입력 -> "Stop~~~~!"

		Q, q 입력 -> ""
		1 입력 


		x 키 입력 -> 프로그램 종료
		기타 입력 -> 잘못된 키 입력
	}
*/