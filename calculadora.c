#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	
	float num1, num2, result;
	char op = '0';
	
	do{
		num1 = num2 = result = 0; //resetar as variaveis
		//imprimindo as opções da calculadora
		
		
		printf("\n (1) somar \n");
		printf(" (2) subtrair \n");
		printf(" (3) multiplicar \n");
		printf(" (4) dividir \n");
		printf(" (0) para sair do programa \n");
		
		printf("\n Informe a operacao desejada: \n");
		op = getche(); // faz a operacao sem precisar do enter para ser validado
		
		if(op != '0'){
			
			printf("\nDigite o primeiro valor: \n\t");
			scanf("%f", &num1);
			printf("Digite o segundo valor: \n");
			scanf("%f", &num2);		
		
				if (op == '1'){
					result = num1 + num2;
						
				} else if (op == '2'){
					result = num1 - num2;
					
				} else if (op == '3'){
					result = num1 * num2;
					
				} else if (op == '4'){
					result = num1 / num2;
					
				}
		
			printf("O resultado da operacao e: %f", result);
		}
		
		
//		system("pause"); //parar o programa

		printf("\n Pressione qualquer tecla para realizar novo calculo");
		getch(); // ao pressionar qualquer tecla ele realiza a operacao sem precisar do enter
		system("cls");
		
	} while(op != '0');
	
	return 0;
}
