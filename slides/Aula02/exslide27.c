#include <stdio.h>

int main()
{
	int a = 4, b = 10, c = 13, d = 20;

	printf("(a < b) && (c <= d) -> %d\n", (a < b) && (c <= d));
	printf("(a > d) || (c >= d) -> %d\n", (a > d) || (c >= d));
	printf("!(a == c) -> %d\n", !(a == c));

	return 0;
}
