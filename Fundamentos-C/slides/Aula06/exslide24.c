#include <stdio.h>

int fat(int n) {
	int f = 1;
	while (n) {
		f *= n;
		n--;
	}
	return f;
}

int rFat(int n)
{
	if (n <= 1)
		return 1;

	return n * rFat(n-1);
}


int main(){
	printf("Fatorial de 5 = %d\n",fat(5));
	printf("Fatorial de 5 = %d\n",rFat(5));
	return 0;
}
