/*Descrição:
Leia 2 valores de ponto flutuante de dupla precisão A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma dos pesos portanto é 11). Assuma que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    double numero1, numero2, valor1, valor2, media;
    
    scanf("%lf", &numero1);
    scanf("%lf", &numero2);
    
    valor1 = numero1 * 3.5;
    valor2 = numero2 * 7.5;
    
    media = (valor1 + valor2) / 11;
    
    printf("MEDIA = %.5lf", media);
    
	return 0;
}