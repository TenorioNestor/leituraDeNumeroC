#include <stdio.h>
#include <stdlib.h>

int main() {
	float numero;	
	char resposta, y , Y;
	
	do{
			
		printf("Digite um numero :\n");
		scanf("%f",&numero);
		fflush(stdin);
		
	if (numero >=0)  {
		printf("Numero positivo\n");
	}
	
	else{
		printf("Numero negativo\n");
	}
	
	printf("Quer continuar\n");
	scanf("%c",&resposta);
	fflush(stdin);
	}while(resposta == 'y'|| resposta == 'Y');
	
}
