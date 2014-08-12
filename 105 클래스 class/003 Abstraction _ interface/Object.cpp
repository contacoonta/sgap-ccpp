#include "Object.h"
#include <iostream>

using std::cout;
using std::endl;

Object::Object()
{
	cout << "--- Object::constructor ---" << endl;
}

Object::~Object()
{
	cout << "--- Object::destructor ---" << endl;
}

void Object::SetPos(float x, float y)
{
	pos.fx = x;
	pos.fy = y;
}

void Object::MovePos(float x, float y)
{
	pos.fx += x;
	pos.fy += y;
}

void Object::show()
{
	cout << "--- Object::show ---" << endl
		<< "fx = " << pos.fx << " , fy = " << pos.fy << endl;
}
