/*
	�ڱ� ���� ����ü

	- ����ü �ȿ� �ڽ��� ����ü�� �ֱ�
*/

#include <stdio.h>

typedef unsigned int UINT;

typedef struct node
{
	UINT ukey;
	int nValue;

	node* pnext;

	// ���ȣ�� ( Recursive call ) ã��
	node* find(UINT key)
	{
		// ����ü�� Ű�� ã������ Ű�� ���ٸ�,
		// this , ���� ����ü ��ü�� �ּ�
		if (ukey == key) return this;			

		// ���� ��尡 �������,
		if (pnext == nullptr) return nullptr;

		pnext->find(key);
	}

}NODE;

void showNode(node* phead);

void main()
{
	node a;
	a.ukey = 1001;
	a.nValue = -77;
	a.pnext = 0;

	node b;
	b.ukey = 1002;
	b.nValue = 21;
	b.pnext = NULL;

	a.pnext = &b;

	node c;
	c.ukey = 1003;
	c.nValue = 100;
	c.pnext = nullptr;

	b.pnext = &c;


	// �Լ��� �����
	// showNode( �Ӹ� �ּ� )
	// node a �� Ȱ���ؼ� a ~ b ���� ���� ���
	showNode(&a);

	// node d �� ����� a �� b ���̿� �ֱ�
	node d;
	d.ukey = 1004;
	d.nValue = 5;
	d.pnext = nullptr;

	a.pnext = &d;
	d.pnext = &b;

	showNode(&a);

	//�Լ� ����� ( ã�� - key�� ã�� ) 
	// ex ) 1004 Ű�� ã�� -> node* 

	//node* pfind = findNode(&a, 1004);
	
	node* pf = a.find(55);
	if (pf == nullptr)
	{
		printf("��� �˻� ����\n");
	}
	else
	{
		printf("pf nvalue = %d\n", pf->nValue);
	}
}

void showNode(node* phead)
{
	printf("---------show---------\n");
	node* pn = phead;
	for (; pn != nullptr;)
	{
		printf("key = %u, value = %d\n",
			pn->ukey, pn->nValue);

		pn = pn->pnext;
	}
}


node* findNode(node* phead, UINT uk)
{
	node* pn = phead;
	for (;pn != nullptr;)
	{
		// Ű�� ã�Ҵٸ�
		if (pn->ukey == uk)
		{
			// ���� ��� �ּҸ� ��ȯ
			return pn;
		}

		pn = pn->pnext;
	}

	// ����Ʈ ��ü�� �˻��ص� ��ã�Ҵٸ�, nullptr ��ȯ
	return nullptr;
}




/*
	���� ] ���� �� ����Ʈ �����

	1. APINK	Mr.Chu
	2. AOA		�ܹ߸Ӹ�
	3. GirlsDay	Darling
	...

	---------------------
	1�� �� �߰� ( �Ǿտ� or �ǵڿ� )
	2�� �� ���� ( ���ϴ� �κ� )
	3�� �� ���� ( �� �� �� ���̿� )
*/