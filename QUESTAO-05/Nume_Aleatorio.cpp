#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese_brazil");
    srand(time(NULL)); //inicializa o gerador de números aleatórios
    int vetor[10], num, i;

    // Sorteia e armazena os 10 números aleatórios no vetor
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 10; //sorteia um número entre 0 e 99
    }
    printf("SEUS NÚMEROS DE 0 A 10 FORAM GERADOS !! \n");
   /* for(int i= 0; i < 10; i++){
    	printf("%d ",vetor[i]);
	}*/
    
	
    printf("\nDigite um número: ");
    scanf("%d", &num);

    // Verifica se o número digitado está no vetor
    for (i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            printf("O número %d está no vetor, na posição %d\n", num, i+1);
            return 0;
        }
    }
    printf("O número %d não está no vetor\n", num);
    return 0;
}
