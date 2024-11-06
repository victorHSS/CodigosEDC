#include <stdio.h>

void swap(int n1, int n2) {
	int tmp = n1;
	n1 = n2;
	n2 = tmp;
}

int main() {
	int n1 = 3, n2 = 5;
	printf("n1 = %d e n2 = %d\n", n1, n2);
	printf("Tentando fazer swap...\n");
	swap(n1,n2);
	printf("n1 = %d e n2 = %d\n", n1, n2);
	return 0;
}

