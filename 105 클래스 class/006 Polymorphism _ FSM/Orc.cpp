#include "Orc.h"


Orc::Orc()
{
	// 현재상태를 IDLE 로 기본설정
	pstate = new StateIdle;
}

Orc::~Orc()
{
	// 현재상태를 최종 정리
	if (pstate)
	{
		delete pstate;
		pstate = nullptr;
	}
}

void Orc::Update()
{
	// 오류체크 : 비정상일 경우 리턴
	if (pstate == nullptr)
		return;
	
	// 정상적인 상황

	pstate->execute(this);
}

void Orc::ChangeState(iState* pnew)
{
	// 오류체크 : 비정상일 경우 리턴
	if (pstate == nullptr || pnew == nullptr)
	{
		return;
	}

	// 정상적인 상황

	// 현재 상태를 이탈
	pstate->exit(this);
	// 현재 상태 삭제
	delete pstate;

	// 새로운 상태를 현재 상태로 만듦
	pstate = pnew;
	// 새로운 상태로 진입
	pstate->enter(this);
}