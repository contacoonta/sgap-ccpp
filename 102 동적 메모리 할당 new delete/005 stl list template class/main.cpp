/*
	STL : Standard Template Library
	list
*/

#include <string>
#include <list>
#include <iostream>

using std::string;
using std::list;

using std::cout;
using std::endl;



enum VehicleType { sedan, suv, truck, van, super, vehicle_max };

typedef struct vehicle
{
	VehicleType	type;
	string		name;
	int			price;
}VEHICLE;


void main()
{
	list<VEHICLE*> vl;	// vehicle list

	// Vehicle 을 new 로 만들고 해당 주소를 list에 넣기.
	// 두 대 추가가 되면 range for 문으로 출력하기.
	VEHICLE* pvehicle = new VEHICLE;
	pvehicle->type = sedan;
	pvehicle->name = "Luxury";
	pvehicle->price = 5000;
	
	vl.push_front(pvehicle);

	pvehicle = new VEHICLE;
	pvehicle->type = suv;
	pvehicle->name = "SUV";
	pvehicle->price = 3000;

	vl.push_front(pvehicle);


	//출력 ( range based for )
	for (auto i : vl)
	{
		cout << i->type << " , " 
			<< i->name << " , " 
			<< i->price << endl;
	}


	//리스트 안의 포인터 정리할때,
	//할당된 메모리 정리를 반드시 해야한다.
	pvehicle = vl.back();
	delete pvehicle;
	vl.pop_back();

	pvehicle = vl.back();
	delete pvehicle;
	vl.pop_back();

	cout << "-------------" << endl;
	for (auto i : vl)
	{
		cout << i->type << " , "
			<< i->name << " , "
			<< i->price << endl;
	}

	// unique_pointer
}