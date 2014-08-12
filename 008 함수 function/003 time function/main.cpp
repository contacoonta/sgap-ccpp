/*
	표준 라이브러리 함수 ( Standard Library Function )
	
	time  시간 출력
*/


#include <stdio.h>
#include <time.h>


bool Alarm(time_t begin, int alarmTime);

void main()
{
	/*time_t currentTime = time(NULL);
	printf("현재시간 = %u\n", currentTime);
	printf("현재시간 = %s\n", asctime(localtime(&currentTime)));*/
	
	//1. 기준 시간 ( 프로그램 시작 시간 )
	const time_t timeBegin = time(NULL);

	while (true)
	{
		if (Alarm( timeBegin, 4) )
		{
			printf("%d 초가 경과 .. !\n", 4);
			break;
		}
	}//while()

}


bool Alarm(time_t begin, int alarmTime)
{
	// 현재 시간을 계속 가져온다.
	time_t timeCurrent = time(NULL);

	if (timeCurrent - begin >= alarmTime)
	{
		return true;
	}
	
	return false;
}





/*
	5초가 지나면 ... 알람 ...

	시작 ..... 5초 경과

	-> 5초가 지났습니다.

	힌트 ]] 

	무한루프
	{
		if ( 5초가 경과 체크 )		-> 함수화
		{
			"5초가 지났습니다."
		}
	}

	//
	bool Alarm( 시작시간, int AlarmTime )
	{
	}

*/