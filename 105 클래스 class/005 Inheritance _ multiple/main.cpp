/*
	���� ��� ( multiple inheritance )
	- ���� �θ� Ŭ������ �ϳ��� �ڽ� Ŭ������ ���
	- �θ� n : �ڽ� 1 ���

	- virtual : ������  ...   -> �����ϴ�
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

/*
	�ֻ���� Ŭ����
	- Ư���� ������ �ϱ⺸��, ������ �ϼ��������� �⺻Ŭ����
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
	���� ����
	- ������ ���ų� ������ �ִ� ���� �ο�.
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
	int nCntArm;		// ���� ����
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
	cout << "Arm ] --- " << nCntArm << " ���� �ȷ� "
		<< "������ ���� �� �ִ�." << endl;
}


/*
	Leg 
	- �ٸ� ����
	- �̵��ɷ� �ο�
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
	int nCntLeg;		// ���� ����
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
	cout << "Leg ] --- " << nCntLeg << " ���� �ٸ��� "
		<< "���� �� �ִ�." << endl;
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
	cout << "�� �̸��� " << name << endl;

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
		�ڽ����� ��ü�� ����� , �θ�� ����
		-> UpCasting
	*/

	//character* pminion = new character;

	//// ĳ������ Show �Լ� ȣ��
	////pminion->show();

	////pminion->Arm::show();
	//Arm* parm = (Arm*)pminion;
	//parm->setArm(2);
	//parm->show();
	//
	//delete pminion;


	/*
		�θ� �����ͷ� ��ü�� �����, �ڽ����� ����
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

