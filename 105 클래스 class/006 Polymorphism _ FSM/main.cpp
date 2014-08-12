/*
	Polymorphism  다형성

	- FSM ( Finite State Machine )

*/


#include <iostream>
#include <conio.h>

#include "Orc.h"

void main()
{

	Orc orc;

	char ch = 0;
	while (ch != 0x1b)	// esc 종료
	{
		if (kbhit())
		{
			fflush(stdin);
			ch = getch();
		}

		orc.Update();
		//std::cout << "Loop..." << std::endl;

		_sleep(500);
	}
}