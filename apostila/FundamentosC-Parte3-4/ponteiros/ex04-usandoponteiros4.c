#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 4, 8, 16 ,32};
	int *p_arr = arr;

	for (int i = 0 ; i < 6 ; i++)
    	    printf("%d ", p_arr[i]);

	return 0;
}
