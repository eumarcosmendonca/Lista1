/*Descrição:
Faça um programa que leia um número inteiro e imprima o seu antecessor (inteiro anterior) e o seu sucessor (inteiro posterior).
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero;
    
    scanf("%d", &numero);
    
    int subtrair = numero - 1;
    int somar = numero + 1;
    
    printf("%d ", subtrair);
    printf("%d ", somar);
    
	return 0;
}