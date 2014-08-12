/*
	Ascii Code 
	- 키보드상의 표현되는 모든 문자들의 숫자표
	- 16진수 표현 :  0x??
*/
#include <stdio.h>

int main()
{
	printf("%c의 AsciiCode = %x\n", 'a', 'a');
	printf("%c의 AsciiCode = %x\n", 'A', 'A');
	printf("%c의 AsciiCode = %x\n", '1', '1');
	printf("%c의 AsciiCode = %x\n", 'b', 'b');
	printf("%x = %c\n", 0x63, 0x63);

	// 'S' 'G' 'A' 'P' -> AsciiCode ?? 53, 47, 41, 50
	
	// esc, enter, spacebar -> 
	printf("esc = %c\n", 0x1B);
	printf("enter = %c\n", 0x0A);
	printf("spacebar = %c\n", 0x20);
}