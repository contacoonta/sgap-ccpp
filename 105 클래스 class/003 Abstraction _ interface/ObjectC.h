#pragma once

/*
*/
typedef struct Point
{
	float fx = 0.0f;
	float fy = 0.0f;

}POINT, *LPPOINT;

/*
*/
class ObjectC
{
public:
	ObjectC();
	~ObjectC();

public:

	/*
	SetPos( float x, float y );
	MovePos( float x, float y );
	void show();

	CalcDistance( POINT other )
	ShowDistance();
	*/

private:
	POINT pos;
};

