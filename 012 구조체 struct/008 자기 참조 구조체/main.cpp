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

	// 재귀호출 ( Recursive call ) 찾기
	node* find(UINT key)
	{
		// 구조체의 키와 찾으려는 키가 같다면,
		// this , 현재 구조체 자체의 주소
		if (ukey == key) return this;			

		// 현재 노드가 꼬리라면,
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

	//node* pfind = findNode(&a, 1004);
	
	node* pf = a.find(55);
	if (pf == nullptr)
	{
		printf("노드 검색 실패\n");
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
		// 키를 찾았다면
		if (pn->ukey == uk)
		{
			// 현재 노드 주소를 반환
			return pn;
		}

		pn = pn->pnext;
	}

	// 리스트 전체를 검색해도 못찾았다면, nullptr 반환
	return nullptr;
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