/*
	���� �迭�� �����,
	pointer �� ����.
*/

#include <iostream>
using namespace std;

void main()
{
	/*int array[5] = {};
	int *ptr = array;*/

	// ptr���ٰ� 1 ~ 5 ���� �� ���..
	/*int *ptr = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		ptr[i] = i+1;
		cout << "ptr[" << i << "] = " << ptr[i] << endl;
	}
	delete [] ptr;
	ptr = nullptr;*/

	/*
		2. cin �Է� __

		void* ... int 

		�� ���� Enemy �� ������ ? __
		������ŭ Enemy �� 1���� ���������� ���� �ʱ�ȭ
	*/

	int enemyCnt = 0;
	cin >> enemyCnt;

	void* penemies = new int[enemyCnt];
	{
		for (int i = 0; i < enemyCnt; ++i)
		{
			//((int*)penemies)[i] = i + 1;
			*((int*)penemies + i) = i + 1;
			cout << "enemy[" << i << "] = " << ((int*)penemies)[i] << endl;
		}
	}
	delete [] penemies;
	penemies = nullptr;
}