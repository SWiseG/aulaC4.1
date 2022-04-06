#include <stdio.h>

int main() {
	int num1;
	int num2;
	printf("Digite o primeiro numero \n");
	scanf("%i", &num1);
	printf("Digite o segundo numero \n");
	scanf("%i", &num2);
	if(num1 > num2){
		printf("Valor 1: %i, e maior que Valor 2: %i \n ", num1, num2);
	}else if(num1 < num2){
		printf("Valor 2: %i, e maior que Valor 1: %i \n ", num2, num1);
	}else if (num1 == num2){
		printf("Os numeros sao iguais");
	}else{
		printf("Não foi possível realizar a verificaçao");
	}
	return 0;
}
