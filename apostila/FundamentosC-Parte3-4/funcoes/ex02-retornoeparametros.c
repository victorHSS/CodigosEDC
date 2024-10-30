#include <stdio.h>

int min(int a, int b){
	if (a < b)
    	    return a;
	else
    	    return b;
}

int main()
{
	printf("%d\n",min(4,8));
	printf("%d\n",min(min(5,9),8));
	printf("%d\n",min(min(5,9),min(4,8)));
	return 0;
}
