/*Descrição:
Você está organizando um bingo e deseja que cada número sorteado apareça no telão.
Faça um programa que dado um número digitado imprima: "O numero sorteado foi: X", onde X é o número sorteado.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero;
    
    scanf("%d", &numero);
    
    printf("O numero sorteado foi: %d", numero);
    
	return 0;
}