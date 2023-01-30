#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"portuguese_brazil");
    srand(time(NULL)); //inicializa o gerador de n�meros aleat�rios
    int vetor[10], num, i;

    // Sorteia e armazena os 10 n�meros aleat�rios no vetor
    for (i = 0; i < 10; i++) {
        vetor[i] = rand() % 10; //sorteia um n�mero entre 0 e 99
    }
    printf("SEUS N�MEROS DE 0 A 10 FORAM GERADOS !! \n");
   /* for(int i= 0; i < 10; i++){
    	printf("%d ",vetor[i]);
	}*/
    
	
    printf("\nDigite um n�mero: ");
    scanf("%d", &num);

    // Verifica se o n�mero digitado est� no vetor
    for (i = 0; i < 10; i++) {
        if (vetor[i] == num) {
            printf("O n�mero %d est� no vetor, na posi��o %d\n", num, i+1);
            return 0;
        }
    }
    printf("O n�mero %d n�o est� no vetor\n", num);
    return 0;
}
