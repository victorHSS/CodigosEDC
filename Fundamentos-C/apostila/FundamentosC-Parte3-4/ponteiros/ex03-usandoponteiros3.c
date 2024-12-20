#include <stdio.h>

int main()
{
	int a, b;
	int *p_a = &a, *p_b = &b;

	scanf("%d %d", p_a, p_b);

	printf("%d", *p_a + *p_b);

	return 0;
}
