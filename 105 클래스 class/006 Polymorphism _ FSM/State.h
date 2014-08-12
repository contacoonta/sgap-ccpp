/*
	virtual ���� �Լ�
	- ��ӹ��� Ŭ������ �Լ��� �켱 ���.

	= 0  ���� ���� �Լ� ( pure virtual function )
	- pvf �� ���ؼ� ��ӹ��� Ŭ������ �ݵ�� ���� �Ѵ�.
*/

#ifndef _STATE_H_
#define _STATE_H_

class Orc;

class iState
{
public:
	virtual ~iState() {};

public:
	// ���� ����
	virtual void enter(Orc* porc) = 0;	// = 0  PURE VIRTUAL
	// ���� ������
	virtual void execute(Orc* porc) = 0;
	// ���� ��Ż
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