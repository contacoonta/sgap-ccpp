/*
	Orc ĳ����
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

	// ���¸� ����
	void	Update();
	void	ChangeState(iState* pnew);

	void	SetHealth(int h)	{ m_health = h;		}
	int		GetHealth() const	{ return m_health;	}

private:
	iState*	pstate		= nullptr;	// ���� ����
	int		m_health	= 20;		// ü������

};





#endif