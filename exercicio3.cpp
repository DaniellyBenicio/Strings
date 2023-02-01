#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Escolhendo uma frase e descobrindo qual o seu inverso\n\n");
	
	char x[500];
	char inverso[500]= "";
	
	printf("Digite a string escolhida: ");
	gets(x);
	
	int max = strlen(x) - 1;
	
	for(int i=0; i<=max; i++){
		inverso[i] = x[max - i];
	}
	
	printf("A string invertida é: %s", inverso);
	
	return 0;
}
