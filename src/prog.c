#include <stdio.h>

int es_par(int num){
	if(num % 2 == 0){
		return 1;
	}else
		return 0;
}

int fibonacci(int n){
	if (n < 2)
		return fibonacci(n-1)+fibonacci(n-2);
	else if (n == 2 || n == 1)
		return 1;
	else if (n == 0)
		return 0;
	return 0;
}

int mayor(int a, int b, int c) {
	int mayor;

	if (a >= b)
		mayor = a;
	else mayor = b;

	if (mayor >= c)
		return mayor;
	else return c;
}

int main(void){
	printf("¿Es 32 un número par?\n");
	if(es_par(32))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
