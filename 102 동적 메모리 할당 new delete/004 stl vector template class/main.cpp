/*
	STL : Standard Template Library
	vector - �迭�� �ڷᱸ��ȭ �� Ŭ����
*/

#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void main()
{
	//1. vector < ������ Ÿ�� > �̸�;
	vector<int> vi;

	//2. ������ �߰�
	vi.push_back(2);
	vi.push_back(-3);

	//3. ���ϴ� ��ġ ���� ���
	cout << "vi �� �ι�° �� = " << vi.at(1) << endl
		<< vi[1] << endl;

	vi.push_back(12);
	vi.push_back(41);

	//4. vector ���� ��簪�� �ϰ� ��� ( range based for )
	
	//range based for ���� ��������, iterator �� ����� ���
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
	//6. vector ���� - ���� ����
	vi.pop_back();
	for (int i : vi)
	{
		cout << i << endl;
	}

	//7. vector ���� - �Ӹ� ����
	cout << "---------------" << endl;
	vi.erase(vi.begin());
	for (int i : vi)
	{
		cout << i << endl;
	}
}