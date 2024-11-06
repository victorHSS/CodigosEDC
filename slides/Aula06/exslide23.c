#include <stdio.h>

int somatoria(int n) {
	int soma = 0;
	while (n) {
		soma += n;
		n--;
	}
	return soma;
}

int rSomatoria(int n)
{
	if (n == 0)
		return 0;

	return n + rSomatoria(n-1);
}


int main(){
	printf("Somatoria de 1..10 = %d\n",somatoria(10));
	printf("Somatoria de 1..10 = %d\n",rSomatoria(10));
	return 0;
}
