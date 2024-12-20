#include <stdio.h>

int somatoria(int num){
	if (num == 1)
    	    return 1;

	return num + somatoria(num - 1);
}

int main()
{
	printf("%d",somatoria(5));
	return 0;
}
