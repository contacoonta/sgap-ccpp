/*
	동적 배열을 만들고,
	pointer 로 제어.
*/

#include <iostream>
using namespace std;

void main()
{
	/*int array[5] = {};
	int *ptr = array;*/

	// ptr에다가 1 ~ 5 대입 후 출력..
	/*int *ptr = new int[5];
	for (int i = 0; i < 5; ++i)
	{
		ptr[i] = i+1;
		cout << "ptr[" << i << "] = " << ptr[i] << endl;
	}
	delete [] ptr;
	ptr = nullptr;*/

	/*
		2. cin 입력 __

		void* ... int 

		몇 개의 Enemy 를 만들까요 ? __
		개수만큼 Enemy 를 1부터 순차적으로 증가 초기화
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