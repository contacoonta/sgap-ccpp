/*
	자기 참조 구조체

	- 구조체 안에 자신의 구조체를 넣기
*/

#include <stdio.h>

typedef unsigned int UINT;

typedef struct node
{
	UINT ukey;
	int nValue;

	node* pnext;

}NODE;

void showNode(node* phead);
node* findNode(node* a, int findData);

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


	// 함수로 만들기
	// showNode( 머리 주소 )
	// node a 를 활용해서 a ~ b 내부 값을 출력
	showNode(&a);

	// node d 를 만들고 a 와 b 사이에 넣기
	node d;
	d.ukey = 1004;
	d.nValue = 5;
	d.pnext = nullptr;

	a.pnext = &d;
	d.pnext = &b;

	showNode(&a);

	//함수 만들기 ( 찾기 - key로 찾기 ) 
	// ex ) 1004 키로 찾기 -> node* 

	node* pfind = findNode(&a, 1003);

	printf("%d\n", pfind->nValue);

}

node* findNode(node* a, int findData)
{
	node* pn = a;
	for(;pn != nullptr;)
	{
		if(pn->ukey == findData)
		{
			return pn;
		}
		pn = pn->pnext;
	}

	return pn;
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


/*
	과제 ] 나의 곡 리스트 만들기

	1. APINK	Mr.Chu
	2. AOA		단발머리
	3. GirlsDay	Darling
	...

	---------------------
	1번 곡 추가 ( 맨앞에 or 맨뒤에 )
	2번 곡 삭제 ( 원하는 부분 )
	3번 곡 삽입 ( 곡 과 곡 사이에 )
*/