#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1 ; i <= 100 ; i++)
	{
		printf("%d ", i);

		if (i == 10)
			break;
	}

	return 0;
}
