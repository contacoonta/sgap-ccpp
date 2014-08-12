/*
	STL : Standard Template Library
	vector - 배열을 자료구조화 한 클래스
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void main()
{
	//1. vector < 데이터 타입 > 이름;
	vector<int> vi;

	//2. 데이터 추가
	vi.push_back(2);
	vi.push_back(-3);

	//3. 원하는 위치 값을 출력
	cout << "vi 의 두번째 값 = " << vi.at(1) << endl
		<< vi[1] << endl;

	vi.push_back(12);
	vi.push_back(41);

	//4. vector 안의 모든값을 일괄 출력 ( range based for )
	
	//range based for 문이 없었을때, iterator 를 사용한 경우
	//vector<int>::iterator itr;
	//itr = vi.begin();
	//for (; itr != vi.end();)
	//{

	//	//itr

	//	itr++;
	//}

	cout << "---------------" << endl;
	//5. range based for
	for (int i : vi)
	{
		cout << i << endl;
	}

	cout << "---------------" << endl;
	//6. vector 삭제 - 꼬리 삭제
	vi.pop_back();
	for (int i : vi)
	{
		cout << i << endl;
	}

	//7. vector 삭제 - 머리 삭제
	cout << "---------------" << endl;
	vi.erase(vi.begin());
	for (int i : vi)
	{
		cout << i << endl;
	}
}