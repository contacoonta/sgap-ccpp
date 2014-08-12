/*
	다중 상속 ( multiple inheritance )
	- 여러 부모 클래스를 하나의 자식 클래스로 상속
	- 부모 n : 자식 1 상속

	- virtual : 가상의  ...   -> 무시하다
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/*
	최상단의 클래스
	- 특별한 역할을 하기보단, 구조를 완성짓기위한 기본클래스
*/
class iGameObj
{
public:
	iGameObj() {};
	virtual ~iGameObj() {};

public :
	virtual void show() 
	{
		cout << "iGameObj ] --- show --- " << endl;
	}
};


/*
	팔의 역할
	- 물건을 집거나 잡을수 있는 역할 부여.
	- ???
*/
class Arm : virtual public iGameObj
{
public:
	Arm();
	virtual ~Arm();

public:
	virtual void show();

	void setArm(int ncnt)	{ nCntArm = ncnt; }
	int getArm()			{ return nCntArm; }
	
private:
	int nCntArm;		// 팔의 개수
};

Arm::Arm()
{
	cout << "Arm ] --- constructor --- " << endl;
}

Arm::~Arm()
{
	cout << "Arm ] --- destructor --- " << endl;
}

void Arm::show()
{
	cout << "Arm ] --- " << nCntArm << " 개의 팔로 "
		<< "물건을 잡을 수 있다." << endl;
}


/*
	Leg 
	- 다리 역할
	- 이동능력 부여
*/
class Leg : virtual public iGameObj
{
public:
	Leg();
	virtual ~Leg();

public:
	virtual void show();

	void setLeg(int ncnt)	{ nCntLeg = ncnt; }
	int getLeg()			{ return nCntLeg; }

private:
	int nCntLeg;		// 팔의 개수
};

Leg::Leg()
{
	cout << "Leg ] --- constructor --- " << endl;
}

Leg::~Leg()
{
	cout << "Leg ] --- destructor --- " << endl;
}

void Leg::show()
{
	cout << "Leg ] --- " << nCntLeg << " 개의 다리로 "
		<< "걸을 수 있다." << endl;
}

/*
*/
class character : public Arm , public Leg
{
public:
	character();
	~character();

	void setname(string str)	{ name = str; }
	string getname()			{ return name; }

	void show();

private:
	string name;
};

character::character()
{
	cout << "Character ] --- constructor --- " << endl;
}

character::~character()
{
	cout << "Character ] --- destructor --- " << endl;
}

void character::show()
{
	cout << "내 이름은 " << name << endl;

	Arm::show();
	Leg::show();
}




/*
*/
void main()
{
	/*character minion;

	minion.setArm(3);
	minion.setname("Poppy");
	minion.setLeg(4);

	minion.show();*/


	/*
		자식으로 객체를 만들고 , 부모로 접근
		-> UpCasting
	*/

	//character* pminion = new character;

	//// 캐릭터의 Show 함수 호출
	////pminion->show();

	////pminion->Arm::show();
	//Arm* parm = (Arm*)pminion;
	//parm->setArm(2);
	//parm->show();
	//
	//delete pminion;


	/*
		부모 포인터로 객체를 만들고, 자식으로 접근
	*/

	iGameObj* pmini = new character;

	//pmini->setLeg(2);
	//pmini->show();
	//character* pchar = (character*)pmini;
	character* pchar = dynamic_cast<character*>(pmini);

	//pchar->setType(MARINE);
	pchar->setArm(1);
	pchar->setLeg(2);
	pchar->show();

	delete pmini;
}

