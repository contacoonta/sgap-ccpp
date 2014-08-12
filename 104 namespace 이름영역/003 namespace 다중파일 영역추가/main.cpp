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
	cout << "이번 휴가에 갈 곳은 = "
		<< travel::travelname[travel::JEJU] << endl;

	cout << "다음 휴가엔 = "
		<< travel::travelname2[travel::PALLOW] << endl;

	cout << travel::kkk << endl;
}

// 크기 순서를 따지자면...
//struct < .h.cpp < namespace


/*
	과제 ] 

	OOP 개념 ?

	Class 란 ?

*/