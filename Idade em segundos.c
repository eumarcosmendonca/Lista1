/*Descrição:
Escreva um programa que leia a idade de uma pessoa e informe quantos segundos ela viveu.
Obs: Considere que um ano sempre tem 365 dias.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int idade, segundos;
    
    scanf("%d", &idade);
    
    segundos = (86400 * 365) * idade;
    
    printf("%d", segundos);
    
	return 0;
}