/*
	����ü�� Ŭ������ ������.
	- ����ü�� �⺻������ public, Ŭ������ private
	- ����ü�� Ŭ������.
*/

#include <iostream>

using std::cout;
using std::endl;

struct PointS
{
//private:
	int x;
	int y;
};

class PointC
{
public:
	int x;
	int y;
};

void main()
{
	PointS pos1;
	pos1.x = 15;
	pos1.y = 27;
	cout << pos1.x << " , " << pos1.y << endl;

	PointC pos2;
	pos2.x = 20;
	pos2.y = 6;
	cout << pos2.x << " , " << pos2.y << endl;

}