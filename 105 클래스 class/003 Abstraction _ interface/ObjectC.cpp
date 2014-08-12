#include <iostream>
#include "ObjectC.h"

using std::cout;
using std::endl;

ObjectC::ObjectC()
{
	cout << "------constructor------" << endl;
}


ObjectC::~ObjectC()
{
	cout << "-----Object Class-----" << endl;
	cout << "pos X = " << pos.fx << " , "
		<< "pos Y = " << pos.fy << endl;
}
