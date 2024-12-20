#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 1;
	
	do
	{
		printf("Quadrado de %d eh %d\n", i, i*i);

		i++;
	} while(i <= 10);

	return 0;
}
