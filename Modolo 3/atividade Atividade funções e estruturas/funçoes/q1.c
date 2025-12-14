#include <stdio.h>
#include <stdlib.h>
float media(int x[3]);
int main() {
	float resposta;
	int notas[3]= {3,2,3};
	resposta= media(notas);
	printf("a media dos valores e : %f",resposta);
}

float media(int x[3]){
	float soma= 0;
	int i;
	float resultado;
	
	for(i=0;i<=3;i++){
		soma = soma + x[i];
	}
	resultado = soma/3;
	return resultado;
}
