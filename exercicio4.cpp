#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("Descubra qual o inverso da string digitada\n\n");
	
	char x[500];
	
	printf("Digite a string: ");
	gets(x);
	
	char aux;
	int max = strlen(x) - 1;
	
	for(int i=0; i<max/2; i++){
		aux = x[i];
		x[i] = x[max - i];
		x[max-i] = aux;	
	}
	
	printf("A string invertida é: %s", x);
	
}
