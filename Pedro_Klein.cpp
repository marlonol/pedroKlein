#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>//necessaria para a corre��o da acentua��o das palavras.


void highNumber(){
	int vetor[3], i=0, Aux=0;
	system("cls");
	printf("Digite tr�s n�meros\n\n");
	for(i=0; i<3; i++){
		printf("Digite o %d� n�mero: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(i=0; i<3; i++){
		if(vetor[i] > Aux){
			Aux = vetor[i];
		}
	}
	system("cls");
	printf("O maior n�mero digitado foi: %d!", Aux);
}

void CalcCirculo(){
	float raio=0, area=0, perim=0, pi=3.14;	
	
	system("cls");
	printf("Digite o Raio do c�rculo: ");	
	scanf("%f", &raio);	
	area = pi*(raio*raio);
	perim = 2*pi*raio ;	
	printf("Para o Raio digitado, o c�rculo possui \n\n-> %.2f de �rea.\n-> %.2f de per�metro.", area, perim);
}

int main (){
setlocale(LC_ALL,"Portuguese"); 
	int menu=0;	
	
	printf("-> '1' para ver qual o maior de 3 n�meros\n-> '2' para calcular per�metro e �rea\nDigite: ");
	scanf("%d", &menu);
	switch(menu){
		case 1:
			highNumber();
			break;
		case 2:
			CalcCirculo();
			break;
	}
}


/* Codado por Marlon Poloni */
