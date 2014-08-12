/*
	중첩 구조체 ( 구조체 안에 구조체 )
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
	float m_fx;
	float m_fy;

	void setPos(float fx, float fy)
	{
		m_fx = fx;
		m_fy = fy;
	}

	void show()
	{
		printf("-------show point-------\n");
		printf("X = %.2f, Y = %.2f\n", m_fx, m_fy);
	}

}POINT;

struct character
{
	POINT posTarget;
	POINT posCurrent;
	char *  name;
	int		Health;

	//			 char str[]
	void SetName(char* str)
	{
		name = str;
		/*for (int i = 0; i < 20; ++i)
		{
			name[i] = str[i];
		}*/
	}
};
typedef character CHARACTER;

void ShowCharacter(character* pchar);

void main()
{
	//POINT p1;
	//// 함수로 만들어 보기
	//p1.setPos(1.2f, 3.4f);
	//p1.show();

	CHARACTER enemy1 = { { 1.1f, 1.1f }, { 3.3f, 3.3f } };
	enemy1.posTarget.show();
	enemy1.posCurrent.show();

	enemy1.SetName("Tycus");

	ShowCharacter(&enemy1);

	/*
		---------캐릭터 정보----------
		이름			: Tycus
		현재 위치	: 3.5f, 4.6f
		목표 위치	: 7.7f, 9.2f
	*/

	system("pause");
}

void ShowCharacter(character* pchar)
{
	printf("%s\n", pchar->name);
}

/*
	과제 ]] Enemy 를 맵에서 이동하기

	□□□□□□□□□□
	□□□□□□□□□□
	□□㉿□□□□□□□	㉿ : enemy
	□□□□□□T□□□
	□□□□□□□□□□
	□□□□□□★□□□	★ : destination
	□□□□□□□□□□
	□□□□□□□□□□

	Enemy 구조체의 start 위치에서 enemy 시작
	dest 위치를 추가로 넣고,
	일정 시간마다 목적지로 이동하기

	_sleep( 1000 )  1000 = 약 1 초
*/