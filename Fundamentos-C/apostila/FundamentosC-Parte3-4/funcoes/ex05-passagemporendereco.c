#include <stdio.h>

void dobra_num(int *num){
	*num = *num * 2;
	return;
}

int main()
{
	int n = 2;
	dobra_num(&n);
	printf("%d",n);

	return 0;
}
