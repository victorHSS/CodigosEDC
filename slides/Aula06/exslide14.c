#include <stdio.h>

int soma_array(int arr[], int tam) {
	int soma = 0;
	for (int i = 0 ; i < tam ; i++)
		soma += arr[i];
	return soma;
}

int main() {
	int array[5] = {2,4,6,8,10};
	printf("Soma do array {2,4,6,8,10} => %d.\n",soma_array(array,5));
	return 0;
}

