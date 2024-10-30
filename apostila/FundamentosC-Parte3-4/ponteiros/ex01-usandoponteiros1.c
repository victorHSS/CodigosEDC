#include <stdio.h>

int main()
{
	int a, b;
	int *p_a = &a, *p_b = &b;
    
	*p_a = 5;
	*p_b = 10;
    
	printf("%d", a + b);

	return 0;
}
