#include <stdio.h>

int es_par(int num){
	if(num % 2 == 0){
		return 1;
	}else
		return 0;
}

void impr(){
	printf("Ejercicio 34\n");
}

int main(void){
	impr()
	printf("¿Es 32 un número par?\n");
	if(es_par(32))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
