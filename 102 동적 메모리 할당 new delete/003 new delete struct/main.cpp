/*
	���� ����ü�� �����,
	pointer �� ����.
*/

#include <iostream>
#include <string>

using namespace std;

enum VehicleType { sedan, suv, truck, van, super, vehicle_max };

typedef struct Vehicle
{
	VehicleType	type;
	string		name;
	int			price;
}VEHICLE;

int main()
{
	//1. ����ü �迭�� ���� �Ҵ�.
	VEHICLE* pvehicle = new VEHICLE[3];
	{
		pvehicle[0].type = VehicleType::truck;
		pvehicle[0].name = "porche";
		pvehicle[0].price = 10000;

		pvehicle[1].type = VehicleType::sedan;
		pvehicle[1].name = "Tico";
		pvehicle[1].price = 90;

		pvehicle[2].type = VehicleType::suv;
		pvehicle[2].name = "����";
		pvehicle[2].price = 150;
	}

	delete [] pvehicle;
	pvehicle = nullptr;

	return 0;
}


/*
	stl vector 
*/