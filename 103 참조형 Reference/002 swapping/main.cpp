/*
	swaps
	���� ���� ��ȯ �õ�

	A <-> B ���� ��ȯ
*/
#include <iostream>
using namespace std;

void swapR(int & A, int & B);

void main()
{
	int A = 100;
	int B = 33;
	int C = 0;
	
	//A <-> B ��ȯ
	/*C = A;
	A = B;
	B = C;*/

	//1. ���� ���� ��ȯ
	// A = ? , B = ?
	//swapV(A, B);
	
	// A = ? , B = ?
	
	//2. �����Ϳ� ���� ��ȯ
	//swapP(A, B);
	
	// A = ? , B = ?

	//3. ������ ���� ��ȯ
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