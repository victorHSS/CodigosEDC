#include <stdio.h>

int min(int n1, int n2) {
	if (n1 < n2)
		return n1;
	else
		return n2;
}

int main() {
	printf("Menor entre %d e %d eh %d\n", 4, 5, min(4,5));
	return 0;
}
