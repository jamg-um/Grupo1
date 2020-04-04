#include <stdio.h>

int es_par(int num){
	if(num % 2 == 0){
		return 1;
	}else
		return 0;
}

void saludo(char* nombre) {
	printf("¡Hola, %s!\n", nombre);
}

void despedida(char* nombre) {
	printf("¡Adiós, %s!\n", nombre);
}

int main(void){
	printf("¿Es 32 un número par?\n");
	if(es_par(32))
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
