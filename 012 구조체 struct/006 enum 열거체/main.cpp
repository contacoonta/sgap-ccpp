/*
	열거체 enum
	- enumerate
*/

#include <stdio.h>
#include <stdlib.h>


enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

enum weapon { Rifle, Pistol, Grenade, Rocket, WEAPON_MAX };
char *str[10] = { "Rifle", "Pistol", "Grenade", "Rocket" };

void main()
{
	int week[7] = {};

	week[Monday] = 21;
	week[Tuesday] = 22;
	//...
	week[Sunday] = 27;

	// enum 순서대로 문자열 배열을 만들고 해당 무기 출력
	//int weapon[WEAPON_MAX];
	printf("무기 종류 = %s\n", str[Rocket]);
	
	system("pause");
}