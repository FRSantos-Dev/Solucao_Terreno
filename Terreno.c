#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	double largura, comprimento,valor,area,preco;
	
	printf("Digite a largura do terreno: ");
	scanf("%lf", &largura);
	
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &comprimento);
	
	printf("Digite valor do metro quadrado: ");
	scanf("%lf",&valor);
	
	area = largura*comprimento;
	preco = area*valor;
	
	printf("Area do terreno = %.2lf\n",area);
	printf("Preco do terreno = %.2lf\n",preco);
		
	return 0;
}
