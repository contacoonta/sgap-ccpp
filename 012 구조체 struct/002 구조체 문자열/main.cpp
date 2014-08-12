/*
	1. 구조체 안에 문자열
	2. 구조체 안에 함수넣기
*/

#include <stdio.h>

struct PROFILE
{
	int		nAge;
	char	name[20];
	int		nOffense;

	void	show()
	{
		printf("-----show profile-----\n");
		printf("age = %d\n", nAge);
		printf("name = %s\n", name);
		printf("offense = %d\n", nOffense);
	}

	void	InputName()
	{
		scanf("%s", name);
	}
};

//void show(PROFILE * pf);

void main()
{
	PROFILE ronaldo = {28, "ronaldo", 96};
	PROFILE messi = { 26, "messi", 98 };

	//내부 데이터 출력
	//printf();
	
	ronaldo.show();
	ronaldo.InputName();
	ronaldo.show();
	
	/*show(&messi);
	show(&ronaldo);*/
	
}

//void show(PROFILE * pf)
//{
//	pf->nAge;
//}