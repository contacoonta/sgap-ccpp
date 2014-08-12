/*
	BMI check 
	( 비만도 측정 )

	BMI = 몸무게 (Kg ) / (키(m) * 키(m))

	결과 수치,
	20 미만 이면		->	저체중
	20 ~ 23 이면		->	정상체중
	23 초과면		->	과체중
	26 이상			->	비만
*/

#include <stdio.h>

void main()
{
	float fBMI = 0.0f;
	float fWeight = 0.0f;
	float fHeight = 0.0f;

	printf("몸무게 : ");
	scanf("%f", &fWeight);

	printf("키 : ");
	scanf("%f", &fHeight);

	// 연산..
	fBMI = fWeight / (fHeight * fHeight);
	printf("BMI = %f\n", fBMI);

	if (fBMI > 0 && fBMI < 20)	//20 미만
	{
		printf("저체중\n");
	}
	else if (fBMI >= 20 && fBMI <= 23)	// 20 <= fBMI <= 23
	{
		printf("정상체중\n");
	}
	else if (fBMI > 23 && fBMI < 26)
	{
		printf("과체중\n");
	}
	else if (fBMI >= 26)
	{
		printf("비만\n");
	}
	else
	{
		printf("키, 몸무게 입력 오류\n");
	}
}