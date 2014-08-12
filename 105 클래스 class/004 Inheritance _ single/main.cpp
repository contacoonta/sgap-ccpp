/*
	단일 상속 ( single inheritance )
	- 부모 클래스 하나를 자식 클래스 하나에 상속
	- 부모 1 : 자식 1
*/

#include <iostream>

using std::cout;
using std::endl;

class base
{
protected:
	void show1()
	{
		cout << "base ] protected show" << endl;
	}

public :
	void show2()
	{
		cout << "base ] public show" << endl;
	}
};

class derived : public base
{
public:
	void show()
	{
		this->show2();
	}
};

class grandderived : public derived
{
};

void main()
{
	derived child;
	child.show();
	child.show2();

	// 
	base* pbase = nullptr;
	pbase = new derived();

	//
	/*derived* pder = nullptr;
	pder = new derived();*/
	

	//pbase->
	delete pbase;

	//
	base* pbase = new grandderived();

	delete pbase;
}


/*minion* pmini1 = new miniMelee;
minion* pmini2 = new miniRange;
minion* pmini3 = new miniMagic;

MiniList->push(pmini1);
MiniList->push(pmini2);
MiniList->push(pmini3);*/