/*Descrição:
Faça um programa que leia um valor representando o gasto realizado por um cliente do restaurante COMABEM e imprima o valor total a ser pago, considerando os 10% do garçom.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float total;
    
    float conta;
    scanf("%f", &conta);
    
    float taxa = conta * 0.10;
    
    total = conta + taxa;
    
    printf("%.2f", total);
    
	return 0;
}