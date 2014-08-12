#include "Orc.h"


Orc::Orc()
{
	// ������¸� IDLE �� �⺻����
	pstate = new StateIdle;
}

Orc::~Orc()
{
	// ������¸� ���� ����
	if (pstate)
	{
		delete pstate;
		pstate = nullptr;
	}
}

void Orc::Update()
{
	// ����üũ : �������� ��� ����
	if (pstate == nullptr)
		return;
	
	// �������� ��Ȳ

	pstate->execute(this);
}

void Orc::ChangeState(iState* pnew)
{
	// ����üũ : �������� ��� ����
	if (pstate == nullptr || pnew == nullptr)
	{
		return;
	}

	// �������� ��Ȳ

	// ���� ���¸� ��Ż
	pstate->exit(this);
	// ���� ���� ����
	delete pstate;

	// ���ο� ���¸� ���� ���·� ����
	pstate = pnew;
	// ���ο� ���·� ����
	pstate->enter(this);
}