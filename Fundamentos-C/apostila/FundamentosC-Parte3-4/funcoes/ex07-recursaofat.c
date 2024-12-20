#include <stdio.h>

int fat(int num){
	if (num == 0)
    	    return 1;

	return num * fat(num - 1);
}

int main()
{
	printf("%d",fat(5));
	return 0;
}
