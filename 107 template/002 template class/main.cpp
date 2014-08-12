/*
	template _ class
*/

#include <iostream>
using std::cout;
using std::endl;

#define TMPLC template < typename Z >

TMPLC
class Point
{
public:
	void set(Z x, Z y);
	void show() const;

private:
	Z x_;
	Z y_;
};

TMPLC
void Point<Z>::set(Z x, Z y)
{
	x_ = x;
	y_ = y;
}

TMPLC
void Point<Z>::show() const
{
	cout << "x = " << x_ << " , y = " << y_ << endl;
}


void main()
{
	Point<int> p1;
	p1.set(5, 6);
	p1.show();

	Point<float> p2;
	p2.set(-3.4f, 7.9f);
	p2.show();
}