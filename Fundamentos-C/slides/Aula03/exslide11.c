#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;

	while(i <= 10)
	{
		printf("Quadrado de %d eh %d\n", i, i*i);

		i++;
	}

	return 0;
}