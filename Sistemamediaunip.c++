#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float np1,np2,pim,mf;
	
	int op;
	
	char nome[12];
	
	printf("\nMe diga seu nome: ");
	scanf("%s",&nome);
	
	printf("\nOla %s, Seja bem vindo ao meu sistema de calculo media unip ",nome);
	printf("\nAgora vamos começar com os calculos! \n");
	
	printf("\nDigite sua nota da np1: \n"); //nota da primeira prova
	scanf("%f",&np1);
	
	printf("\nDigite sua nota da np2: \n"); //nota da segunda prova
	scanf("%f",&np2);

	printf("\nDigite sua nota da pim: \n");//nota do pim
	scanf("%f",&pim);
	
	mf = (4*np1+4*np2+2*pim)/10; //calculo para mostrar media final da unip
	
	printf("\nSua media final e: %f \n",mf); //mostra ao usuario sua media final apos colher os dados
	
	float notafinal,frequencia;
	
	printf("\nDigite sua frequencia,em %%"); //%% para exibir o numero em porcentagem!
	scanf("%f",&frequencia);
	
	notafinal = mf; //notafinal recebe o valor do calculo de mf feito no codigo acima
	
	if(notafinal>=5&&frequencia>=75){
		printf("\nAluno(a) aprovado(a).");
	}
	else{
		printf("\nAluno(a) reprovado(a).");
	}
		printf("\n\nEspero Ter ajudado a calcular sua nota");
		printf("\n\nDigite qualquer numero para fechar o sistema\n");
		scanf("%d", &op);
		
	return 0;
	
}
