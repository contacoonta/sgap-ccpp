/*
	��ø ����ü ( ����ü �ȿ� ����ü )
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
	float m_fx;
	float m_fy;

	void setPos(float fx, float fy)
	{
		m_fx = fx;
		m_fy = fy;
	}

	void show()
	{
		printf("-------show point-------\n");
		printf("X = %.2f, Y = %.2f\n", m_fx, m_fy);
	}

}POINT;

struct character
{
	POINT posTarget;
	POINT posCurrent;
	char *  name;
	int		Health;

	//			 char str[]
	void SetName(char* str)
	{
		name = str;
		/*for (int i = 0; i < 20; ++i)
		{
			name[i] = str[i];
		}*/
	}
};
typedef character CHARACTER;

void ShowCharacter(character* pchar);

void main()
{
	//POINT p1;
	//// �Լ��� ����� ����
	//p1.setPos(1.2f, 3.4f);
	//p1.show();

	CHARACTER enemy1 = { { 1.1f, 1.1f }, { 3.3f, 3.3f } };
	enemy1.posTarget.show();
	enemy1.posCurrent.show();

	enemy1.SetName("Tycus");

	ShowCharacter(&enemy1);

	/*
		---------ĳ���� ����----------
		�̸�			: Tycus
		���� ��ġ	: 3.5f, 4.6f
		��ǥ ��ġ	: 7.7f, 9.2f
	*/

	system("pause");
}

void ShowCharacter(character* pchar)
{
	printf("%s\n", pchar->name);
}

/*
	���� ]] Enemy �� �ʿ��� �̵��ϱ�

	�����������
	�����������
	���ޡ�������	�� : enemy
	�������T����
	�����������
	�������ڡ���	�� : destination
	�����������
	�����������

	Enemy ����ü�� start ��ġ���� enemy ����
	dest ��ġ�� �߰��� �ְ�,
	���� �ð����� �������� �̵��ϱ�

	_sleep( 1000 )  1000 = �� 1 ��
*/