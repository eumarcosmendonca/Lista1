/*Descrição:
Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X.
Imprima X conforme o exemplo de entrada saída apresentado. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir quebra de linha após o resultado.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int a, b, x;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    x = a + b;
    
    printf("X = %d", x);
    
	return 0;
}