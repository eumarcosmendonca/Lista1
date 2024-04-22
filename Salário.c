/*Descrição:
Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas decimais.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero, horas;
    float salario, total;
    
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%f", &salario);
    
    total = horas * salario;
    
    printf("NUMBER = %d\n", numero);
    printf("SALARY = R$ %.2f", total);
    
	return 0;
}