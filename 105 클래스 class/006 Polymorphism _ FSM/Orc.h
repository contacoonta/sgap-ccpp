/*
	Orc 캐릭터
*/

#ifndef _ORC_H_
#define _ORC_H_

#include "State.h"


class iGameObj
{
public:
	virtual ~iGameObj() {}
};

class Orc : public iGameObj
{
public:
	Orc();
	~Orc();

public:	// interface

	// 상태를 변경
	void	Update();
	void	ChangeState(iState* pnew);

	void	SetHealth(int h)	{ m_health = h;		}
	int		GetHealth() const	{ return m_health;	}

private:
	iState*	pstate		= nullptr;	// 현재 상태
	int		m_health	= 20;		// 체력지수

};





#endif