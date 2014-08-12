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

	// Vehicle �� new �� ����� �ش� �ּҸ� list�� �ֱ�.
	// �� �� �߰��� �Ǹ� range for ������ ����ϱ�.
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


	//��� ( range based for )
	for (auto i : vl)
	{
		cout << i->type << " , " 
			<< i->name << " , " 
			<< i->price << endl;
	}


	//����Ʈ ���� ������ �����Ҷ�,
	//�Ҵ�� �޸� ������ �ݵ�� �ؾ��Ѵ�.
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