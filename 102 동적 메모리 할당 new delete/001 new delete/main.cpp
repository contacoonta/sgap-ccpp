/*
	�� ���� �Ҵ� �ұ� ?

	- �� ĳ���� 1000 ����..
	- �ʿ��Ҷ� �ѵθ����� ����..

	- �޸� Ǯ�� ( Memory pooling )
*/

#include <iostream>

using namespace std;

void CreateData(void** ppdat, int val);
void DeleteData(void** ppdat);

void main()
{
	//1. �̸��� �ִ� ����
	int num = 61;
	int *pnum = &num;

	cout << "�� = " << *pnum << "�ּ� = " << pnum << endl;

	//2. �̸��� ���� �����ͷ� ����
	int *pnum1 = nullptr;
	pnum1 = new int;	//new
	{
		*pnum1 = 77;
		cout << "pnum1 �� = " << *pnum1 << endl;
	}
	delete pnum1;		//delete
	pnum1 = nullptr;	//nullptr �ʱ�ȭ

	//cout << "pnum1 �� = " << *pnum1 << endl;

	//3. �޸� �Ҵ�� ���ÿ� �ʱ�ȭ
	void* pnum2 = new float(3.1415f);

	// �� �� �ּ� 
	cout << "pnum2 �ּ� = " << pnum2 << endl
		<< "pnum2 �� = " << *(float*)pnum2 << endl;

	delete pnum2;
	pnum2 = nullptr;


	// Ȯ��..
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