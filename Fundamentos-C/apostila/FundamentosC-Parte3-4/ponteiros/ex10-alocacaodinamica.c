#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *arr = NULL, tam;

	printf("Me diz um tamanho de array: ");
	scanf("%d",&tam);

	arr = (int*) malloc(sizeof(int) * tam);

	for (int i = 0 ; i < tam ; i++)
    	    arr[i] = i;

	for (int i = 0 ; i < tam ; i++)
    	    printf("%d ", *(arr + i));

	free(arr);
	return 0;
}
