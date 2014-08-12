/*
	keyinput function
*/
#include <stdio.h>

char keyinput();
void keyshow(char c);

void main()
{
	char ch = keyinput( );
	keyshow(ch);
}

char keyinput()
{
	char ch = 0;
	scanf("%c", &ch);

	return ch;
}

void keyshow(char c)
{
	printf("key = %c\n", c);
}