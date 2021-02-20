#include <stdio.h>
#include <stdlib.h>

int main()
{

// Separei em alguns blocos as variaveis pra não ficar confuso, e pra voce entender a logica que eu usei.

//	Salario variaveis
	float salario = 0, maiorSalario, totalSalario, mediaSalarial;
	
//	Filhos variaveis
	float filhos, totalFilhos, mediaFilhos;
	
//	Salario ate 320 reais variaveis
	float porcentagemSalTrezentos, quantSalTrezentos = 0;
	
//	Pessoas variaveis
	int quantPessoas = 0;
	
	while (salario >= 0) {
		printf("Digite salario: ");
		scanf("%f", &salario);
		
		if (!(salario < 0)) {
			if (salario > maiorSalario) {
				maiorSalario = salario;
			}
			
			if (salario < 320) {
				quantSalTrezentos++;
			}
			
			printf("Digite a quantidade de filhos: ");
			scanf("%f", &filhos);
			
			if (!(filhos < 0)) {
				totalFilhos += filhos;
			}
			
			totalSalario += salario;
			quantPessoas++;
		} else {
			printf("\n \n \nO salario precisava ser maior ou igual a 0 \n \n");
		}
		
	}
	
	mediaSalarial = (totalSalario / quantPessoas);
	mediaFilhos = (totalFilhos / quantPessoas);
	porcentagemSalTrezentos = ((quantSalTrezentos) / quantPessoas) * 100;
	
	printf("Media salarial: %.2f \n", mediaSalarial);
	printf("Media filhos: %.1f \n", mediaFilhos);
	printf("Porcentagem pessoas ate 320 reais: %.2f porcento \n", porcentagemSalTrezentos);
	printf("Quantidade de pessoas: %d", quantPessoas);
	
	return 0;

}
