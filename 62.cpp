#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int alunos;
	float media,notas,somanot=0;
	
	printf("\nCalculadora da Média\n\n");
	printf("Digite a quantidade de alunos: ");
	scanf("%d",&alunos);
	printf("\n\nDigites as notas dos %d alunos\n\n",alunos);
	
	for(int i=1;i<=alunos;i++){
		
	printf("Notas do aluno %i: ",i);
	scanf("%f",&notas);
	
	somanot+=notas;
	
	}
	media=somanot/alunos ;
	
	printf("\n\nA média da turma foi:%.2f",media);
		
	return 0;
}
