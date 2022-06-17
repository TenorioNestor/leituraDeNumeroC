#include <stdio.h>
#include <stdlib.h>

int main() {
	float numero;	
	char resposta, y , Y;
	
	do{
		float numero;	
		char resposta;
		printf("Digite um numero :\n");
	scanf("%f",&numero);
	
	if (numero >=0)  {
		printf("Numero positivo\n");
	}
	
	else{
		printf("Numero negativo\n");
	}
	
	printf("Quer continuar\n");
	scanf("%c",&resposta);
	}while(resposta == y);
	
}
	
	

	

