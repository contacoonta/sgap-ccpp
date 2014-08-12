/*
	Operator ������ 
	Overloading ������

	- �Լ��� �������� ���·� ��ȯ
	- �˱⽱��. ������.
*/

#include <iostream>
using std::cout;
using std::endl;

typedef class point
{
public:
	//������1
	point() :
		fX(1.0f), fY(1.0f)
	{
		cout << "--- constructor 1 ---" << endl;
	}

	//������2
	point(point & p)
	{
		cout << "--- constructor 2 ---" << endl;
		//1.
		/*fX = p.fX;
		fY = p.fY;*/

		//2.
		*this = p;
	}

	//������3 : ������ ȣ��� ���ÿ� �ʱ�ȭ
	point(float x, float y)
	{
		cout << "--- constructor 3 ---" << endl;
		fX = x;
		fY = y;
	}

	~point() 
	{
		cout << "--- destructor 1 ---" << endl;
	}

public:
	void show();

private:
	float fX = 2.0f;
	float fY = 2.0f;

}POINT;



void point::show()
{
	cout << "fX = " << fX << " , fY = " << fY << endl;
}

/*
*/
void main()
{
	//������1
	POINT pt;
	pt.show();

	//������3
	POINT pt1(4.2f, 7.4f);
	pt1.show();
	
	//������2
	POINT* pt2 = new POINT(pt1);
	pt2->show();
	delete pt2;
}