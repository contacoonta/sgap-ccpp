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
	map class 만들기

	Member Var )
	초기값으로 맵 크기 설정하기
	위치를 지정하면 타일 속성이 1로 변환

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

기본]
	CreateMap( int row, int column );
	RenderMap();
	SetTile(int row, int column, tiletype etype);

확장]
	SaveMapFile( filename );
	LoadMapFile( filename );
*/