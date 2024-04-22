/*Descrição:
Faça um programa que leia um número inteiro e imprima a tabuada de multiplicação deste número. Suponha que o número lido da entrada é maior que zero.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int numero, um, dois, tres, quatro, cinco, seis, sete, oito, nove;
    
    scanf("%d", &numero);
    
    um = numero * 1;
    dois = numero * 2;
    tres = numero * 3;
    quatro = numero * 4;
    cinco = numero * 5;
    seis = numero * 6;
    sete = numero * 7;
    oito = numero * 8;
    nove = numero * 9;
    
    printf("%d X 1 = %d\n", numero, um);
    printf("%d X 2 = %d\n", numero, dois);
    printf("%d X 3 = %d\n", numero, tres);
    printf("%d X 4 = %d\n", numero, quatro);
    printf("%d X 5 = %d\n", numero, cinco);
    printf("%d X 6 = %d\n", numero, seis);
    printf("%d X 7 = %d\n", numero, sete);
    printf("%d X 8 = %d\n", numero, oito);
    printf("%d X 9 = %d", numero, nove);
    
	return 0;
}