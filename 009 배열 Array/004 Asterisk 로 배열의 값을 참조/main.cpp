/*
	* Asterisk 활용해서 값을 참조.
	- *뒤에 반드시 "주소"만 올 수 있다.

	&뒤에 ->  값에 대한 주소 확인
	*뒤에 ->  무조건 주소에 대한 값을 확인
*/

#include <stdio.h>

void main()
{
	char nums[] = { 1, 2, 3, 4, 5, 6 };

	//1. 3번째 값을 음수로 바꾸기
	nums[2] *= -1;

	//2. 3번째 값 출력
	printf("nums[2] = %d\n", nums[2]);

	//3. 3번째 값 -> 주소 출력
	printf("nums[2] = %p\n", &nums[2]);

	//4. 3번째 값 -> 주소 출력 다른 형태
	printf("nums + 2 = %p\n", nums + 2);
	
	//5. 3번째 값 -> 주소 -> 값 출력
	printf("*(nums + 2) = %d\n", *(nums + 2));

	//6. 3.번 형태 -> 값 출력
	printf("nums[2] = %d\n", *(&nums[2]));
}