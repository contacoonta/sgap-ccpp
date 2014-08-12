/*
	swaps
	값에 대한 교환 시도

	A <-> B 서로 교환
*/
#include <iostream>
using namespace std;

void swapR(int & A, int & B);

void main()
{
	int A = 100;
	int B = 33;
	int C = 0;
	
	//A <-> B 교환
	/*C = A;
	A = B;
	B = C;*/

	//1. 값에 의한 교환
	// A = ? , B = ?
	//swapV(A, B);
	
	// A = ? , B = ?
	
	//2. 포인터에 의한 교환
	//swapP(A, B);
	
	// A = ? , B = ?

	//3. 참조에 의한 교환
	cout << "A = " << A << " , B = " << B << endl;
	swapR(A, B);
	cout << "A = " << A << " , B = " << B << endl;
	
	// A = ? , B = ?
}

void swapR(int & A, int & B)
{
	int temp = A;
	A = B;
	B = temp;
}