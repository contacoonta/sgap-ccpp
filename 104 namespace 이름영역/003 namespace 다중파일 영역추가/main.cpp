#include "travel1.h"
#include "Travel2.h"

#include <iostream>
#include <string>

using std::cout;
using std::endl;

namespace travel
{
	int kkk = 11;
}


void main()
{
	cout << "�̹� �ް��� �� ���� = "
		<< travel::travelname[travel::JEJU] << endl;

	cout << "���� �ް��� = "
		<< travel::travelname2[travel::PALLOW] << endl;

	cout << travel::kkk << endl;
}

// ũ�� ������ �����ڸ�...
//struct < .h.cpp < namespace


/*
	���� ] 

	OOP ���� ?

	Class �� ?

*/