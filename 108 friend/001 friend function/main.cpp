/*
	friend 
*/
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using std::ostream;
using std::istream;


typedef class Data
{
public:
	friend void setdata(Data& dat, int v1, float v2);
	void show();

	//1. friend function
	friend ostream& operator<< (ostream & os, Data& dat);
	friend void		operator>> (istream & is, Data& dat);

private:
	int		nval = 0;
	float	fval = 0.0f;

}DATA;

void setdata(Data& dat, int v1, float v2)
{
	dat.fval = v1;
	dat.nval = v2;
}

void Data::show()
{
	cout << "----- data show -----" << endl;

	cout << nval << " , " << fval << endl;
}

ostream& operator<< (ostream & os, Data& dat)
{
	os << "operator ]] "
		<< "nVal = " << dat.nval << " , "
		<< "fVal = " << dat.fval << endl;

	return os;
}

void operator>> (istream & is, Data& dat)
{
	is >> dat.nval >> dat.fval;
}



void main()
{
	DATA dat;

	setdata(dat, 10, 4.5f);

	dat.show();

	// cout 형태로 출력해주기위해,
	// Data 클래스 내부에 << Op Overloading 한다.
	
	cin >> dat;
	cout << dat << endl;
}