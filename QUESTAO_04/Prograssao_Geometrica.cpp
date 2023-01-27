#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"portuguese_brazil");
	int PG[10];
	int r;
	
	printf("Digite o valor inicial da P.G: ");
	scanf("%d", &PG[0]);
	printf("Digite a rasão da P.G: ");
	scanf("%d", &r);
	
	for(int i=1; i < 10; i++){
		PG[i]= PG[i-1] * r;
	}
	printf("SUA P.G : \n");
	for(int i=0; i < 10; i++){
		printf("%d ",PG[i]);
	}
	
	return 0;
}
