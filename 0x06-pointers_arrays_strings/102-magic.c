#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/**
	 * write your line of code here...
	 * Remember:
	 * - you are not allow to use a
	 * - you are not allow to modify p
	 * - only one statement
	 * - you are not allowes to code anything else than this line of code
	*/
        
        *(p + 5) = 98;
        /* ... so that this print 98\n */
	return (0);
}
