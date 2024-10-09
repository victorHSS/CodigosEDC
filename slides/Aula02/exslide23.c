#include <stdio.h>

int main()
{
	int a = 4, b = 10, c = 13, d = 20;

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("c * d = %d\n", c * d);
	printf("d / a = %d\n", d / a);
	printf("b %% a = %d\n", b % a);

	c--; //mesmo que c = c - 1 ou c-=1
	a++; //mesmo que a = a + 1 ou a+=1

	printf("c = %d e a = %d\n", c, a);
	return 0;
}
