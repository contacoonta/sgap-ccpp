/*
	������ & �Ҹ��� , �ı��� ( Constructor & Destructor )
	- ������ : Class ��ü�� �����ϸ�, ���� ���� ����.
	- �Ҹ��� : Class ��ü�� �������, ���� ���߿� ����.

	- ������ �� �ָ��ڴ� Ŭ������ �̸��� �����ϴ�.
		~ (tilde) �Ҹ����� �տ� ���δ�.
	- ������ �� �Ҹ��ڴ� ��ȯ���� ����. ( return ����. )
	- ������ �� �Ҹ��ڴ� ������ �����ڰ�, �Ҹ�� �Ҹ��ڰ� �ڵ� ȣ��ȴ�.

	- �����ڴ� Ŭ���� ������ �����͸� �ʱ�ȭ �Ҷ� ���
	- �Ҹ��ڴ� Ŭ���� ������ �����͸� ������ �Ҷ� ���
*/

#include <iostream>

using std::cout;
using std::endl;

class Point
{
public:
	Point();
	~Point();

	void SetPoint(int nx, int ny);	//����Լ�
	void Show();

private:
	int x;	//������� ( member variable )
	int y;
};

Point::Point()
{
	cout << "--- ������ ȣ�� ---" << endl;

	// Ŭ���� �������
	x = 0;
	y = 0;
}

Point::~Point()
{
	cout << "--- �Ҹ��� ȣ�� ---" << endl;
}

void Point::SetPoint(int nx, int ny)
{
	x = nx;
	y = ny;
}

void Point::Show()
{
	cout << "x = " << x << " , " << "y = " << y << endl;
}



void main()
{
	Point pos;

	cout << "--- �����Լ� ���� ȣ�� ---" << endl;
	
	//pos ���ο� �Լ��� ���� -> ( 5,6 )
	// SetPoint( 5, 6 )
	
	pos.SetPoint(5, 6);
	pos.Show();

	pos.SetPoint(-4, 59);
	pos.Show();

	// ShowPoint();
	// posX = ? , posY = ? ���..

}