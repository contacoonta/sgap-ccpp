/*
	왜 동적 할당 할까 ?

	- 적 캐릭터 1000 마리..
	- 필요할때 한두마리씩 생성..

	- 메모리 풀링 ( Memory pooling )
*/

#include <iostream>

using namespace std;

void CreateData(void** ppdat, int val);
void DeleteData(void** ppdat);

void main()
{
	//1. 이름이 있는 변수
	int num = 61;
	int *pnum = &num;

	cout << "값 = " << *pnum << "주소 = " << pnum << endl;

	//2. 이름이 없이 포인터로 관리
	int *pnum1 = nullptr;
	pnum1 = new int;	//new
	{
		*pnum1 = 77;
		cout << "pnum1 값 = " << *pnum1 << endl;
	}
	delete pnum1;		//delete
	pnum1 = nullptr;	//nullptr 초기화

	//cout << "pnum1 값 = " << *pnum1 << endl;

	//3. 메모리 할당과 동시에 초기화
	void* pnum2 = new float(3.1415f);

	// 값 과 주소 
	cout << "pnum2 주소 = " << pnum2 << endl
		<< "pnum2 값 = " << *(float*)pnum2 << endl;

	delete pnum2;
	pnum2 = nullptr;


	// 확장..
	void* pdat = nullptr;
	CreateData(&pdat , 45);

	cout << "pdat = " << *(int*)pdat << endl;

	DeleteData(&pdat);
}

void CreateData(void** ppdat, int val)
{
	*ppdat = new int;

	*(int*)(*ppdat) = val;
}

void DeleteData(void** ppdat)
{
	delete *ppdat;
	*ppdat = nullptr;
}