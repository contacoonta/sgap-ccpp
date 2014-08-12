/*
	friend 
*/
#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

using std::ostream;
using std::istream;

using std::ofstream;
using std::ifstream;


typedef class Data
{
public:
	//2. friend class
	friend class SaveFile;
	friend class LoadFile;

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


class SaveFile
{
public:
	void SaveToFile(Data& dat, char* filename)
	{
		ofstream ofs;

		ofs.open(filename, std::ios_base::out);

		/*ofs.put(dat.nval);
		ofs.put(dat.fval);*/

		ofs << dat.nval << " " << dat.fval << endl;

		ofs.close();
	}
};

class LoadFile
{
public:
	void LoadFromFile(Data& dat, char* filename)
	{
		ifstream ifs;

		ifs.open(filename, std::ios_base::in);

		/*ofs.put(dat.nval);
		ofs.put(dat.fval);*/

		ifs >> dat.nval >> dat.fval;

		ifs.close();
	}
};


void main()
{
	DATA dat;

	setdata(dat, 10, 4.5f);

	dat.show();

	// cout 형태로 출력해주기위해,
	// Data 클래스 내부에 << Op Overloading 한다.
	
	/*cin >> dat;
	cout << dat << endl;*/

	/*SaveFile sav;
	sav.SaveToFile(dat, "friend.txt");*/

	LoadFile load;
	load.LoadFromFile(dat, "friend.txt");
	
	dat.show();
}