#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	char qualquer[500];
	char a;
	int t=0;
	
	printf("Digite uma frase, palavra ou letra de sua preferência: ");
	gets(qualquer);
	
	printf("Digite uma letra qualquer: ");
	scanf("%s", &a);
	
	for(int idx = 0; idx < 500; idx++){
		if(qualquer[idx] == a){
			t++; 
		}
		if(qualquer[idx]== '\0'){
			break;
		}
	}
	
	printf("A resposta é: %d", t);
		
	return 0;
}
