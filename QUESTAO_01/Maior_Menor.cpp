#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int num[10];
	int maior=num[0],menor=10000000,posg=0,posp=0;
	
	printf("TESTAR MAIOR E MENOR N�MERO : \n");
	
	for(int i=0; i < 10; i++){
		printf("Digite o %d� valor: ",i+1);
		scanf("%d", &num[i]);
		if(maior < num[i]){
			maior= num[i];
			posg= i;
		}
		
		if(menor > num[i]){
			menor= num[i];
			posp=i;
		}
	}
	printf("\n");
	
	printf("O maior n�mero � : %d e est� na posi��o: %d \n", maior,posg+1);
	printf("O menor n�mero � : %d e est� na posi��o: %d\n",menor,posp+1);
	return 0;
}
