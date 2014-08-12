/*
	Struct 
	- 배열과 차이점 
		배열 : 같은 데이터 타입을 사용.
		구조체 : 다른 데이터 타입도 사용 가능.
*/

#include <stdio.h>


//		구조체 이름
struct profile
{
	int		nAge = 0;
	int	    nPhone = 0;
	float	fWeight = 0.0;
	//...
};

void main()
{
	//1. 구조체 선언 과 사용
	profile ljc;
	ljc.nAge = 23;
	ljc.nPhone = 12345678;
	ljc.fWeight = 68.5f;

	//ljc 의 내부 데이터를 출력하기
	//printf(ljc.nAge);

	//2. 구조체 크기
	//printf("크기 = %d\n", sizeof(profile));

	//3. 구조체 내부 변수들의 주소는 연속적인가 ?
	//printf("nAge 주소 = %p\n", &ljc.nAge);

	//4. 구조체 변수중 시작 주소를 포인터에 전달
	// 값 이 출력 되도록

	auto pptr = &ljc.nAge;

	//for (int i = 0; i < 3; ++i )
	//{
	//	//printf("%d\n", pptr[i]);
	//	std::cout << pptr[i] << std::endl;
	//}
	printf("%f\n", *(float*)(pptr+2));

}



