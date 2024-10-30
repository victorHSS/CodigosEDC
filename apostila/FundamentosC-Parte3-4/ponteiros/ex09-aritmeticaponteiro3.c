#include <stdio.h>

int main()
{
	int arr[3] = {512, 1024, 2048};

	int *p = arr + 1;  // p aponta para o meio do array
    
	p = p - 1; // p aponta para o início do array
	printf("%d\n",*p);
    
	p = p + 2; // p aponta para o fim do array
	printf("%d",*p);
    
	return 0;
}
