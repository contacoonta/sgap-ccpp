/*
	while - 구구단 출력

	몇 단 출력 : __  ( scanf )

	___ * 1 = ?
	___ * 2 = ?
	___ * 3 = ?
	...
	___ * 9 = ?

*/

#include <stdio.h>

void main()
{
	int l = 0;
	scanf("%d", &l );

	int n = 1;
	while ( n <= 9 )
	{
		printf("%d * %d = %d\n", l, n, l*n);
		n++;
	}
}


/*
	while 문 활용]
	* 8개 그리기

	*
	 *
	  *
	   *
	    *
		 *
		  *
		   *


	가로		: H
	세로		: V
	이중 while 문 활용.
*/
