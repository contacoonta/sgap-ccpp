/*
	����ü enum
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

	// enum ������� ���ڿ� �迭�� ����� �ش� ���� ���
	//int weapon[WEAPON_MAX];
	printf("���� ���� = %s\n", str[Rocket]);
	
	system("pause");
}