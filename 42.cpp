#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int cod,nasc,ing,tempo,idade;
	
	printf("\n\n\t\t\t\t\tAponsetadoria\n\n\n\n");
	printf("Digite o seu código: ");
	scanf("%d",&cod);
	printf("Digite o ano do seu nascimento: ");
	scanf("%d",&nasc);
	printf("Digite o ano que ingressou a empresa: ");
	scanf("%d",&ing);
	
	idade=2022-nasc;
	tempo=2022-ing;
	
	if( (idade>=65) || (tempo>=30) || ( idade>=60 && tempo>=25 )){
		
		printf("\nIdade: %d\nTempo de trabalho: %d\n\nRequerer aposentadoria",idade,tempo);
		
	}else{
		printf("\nIdade: %d\nTempo de trabalho: %d\n\nNão Requerer",idade,tempo);	
	}
	
	return 0;
}
