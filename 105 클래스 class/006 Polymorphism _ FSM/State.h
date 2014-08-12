/*
	virtual 가상 함수
	- 상속받은 클래스의 함수를 우선 사용.

	= 0  순수 가상 함수 ( pure virtual function )
	- pvf 에 대해서 상속받은 클래스는 반드시 정의 한다.
*/

#ifndef _STATE_H_
#define _STATE_H_

class Orc;

class iState
{
public:
	virtual ~iState() {};

public:
	// 상태 진입
	virtual void enter(Orc* porc) = 0;	// = 0  PURE VIRTUAL
	// 상태 진행중
	virtual void execute(Orc* porc) = 0;
	// 상태 이탈
	virtual void exit(Orc* porc) = 0;
};


/*
	StateIdle
*/
class StateIdle : public iState
{
private:
	void enter(Orc* porc);
	void execute(Orc* porc);
	void exit(Orc* porc);
};


/*
	StateSleep
*/
class StateSleep : public iState
{
private:
	void enter(Orc* porc);
	void execute(Orc* porc);
	void exit(Orc* porc);
};


#endif