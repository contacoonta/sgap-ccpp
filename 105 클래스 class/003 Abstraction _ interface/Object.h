#pragma once

/*
*/

typedef struct Point
{
	float fx = 0.0f;
	float fy = 0.0f;

}POINT, *LPPOINT;

class Object
{
public:
	Object();
	~Object();

public:
	void SetPos(float x, float y);
	void MovePos(float x, float y);
	void show();

	/*float CalcDistance(POINT other);
	void ShowDistance();*/

private:
	POINT pos;
};




/*
	map class �����

	Member Var )
	�ʱⰪ���� �� ũ�� �����ϱ�
	��ġ�� �����ϸ� Ÿ�� �Ӽ��� 1�� ��ȯ

	3,3
	000
	000
	010

	5,6
	000000
	000100
	000100
	000100
	000100

	>>>>
	enum tiletype { ROAD, WALL, MAX_TILE };

�⺻]
	CreateMap( int row, int column );
	RenderMap();
	SetTile(int row, int column, tiletype etype);

Ȯ��]
	SaveMapFile( filename );
	LoadMapFile( filename );
*/