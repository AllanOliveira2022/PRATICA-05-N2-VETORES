#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int PA[10];
	int r;
	
	printf("Digite o valor inicial da P.A: ");
	scanf("%d", &PA[0]);
	printf("Digite a rasão da P.A: ");
	scanf("%d", &r);
	
	for(int i=1; i < 10; i++){
		PA[i]= PA[i-1] + r;
	}
	printf("SUA P.A : \n");
	for(int i=0; i < 10; i++){
		printf("%d ",PA[i]);
	}
	
	return 0;
}
