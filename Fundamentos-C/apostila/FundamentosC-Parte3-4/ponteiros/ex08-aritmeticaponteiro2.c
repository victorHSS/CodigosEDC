#include <stdio.h>

int main()
{
	int arr[3] = {512, 1024, 2048}, t;
	int *p = arr + 1; // p aponta para o meio do array

	t = *(p - 1);
	*(p - 1) = *(p + 1);
	*(p + 1) = t;

	printf("%d %d %d", *(p - 1), *p, *(p + 1));

	return 0;
}
