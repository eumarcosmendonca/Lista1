/*Descrição:
Leia 3 valores, no caso variáveis A, B e C, que são as três notas de um aluno. A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5. Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float a, b, c, multiplicacao1, multiplicacao2, multiplicacao3, total, media;
    
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    multiplicacao1 = a * 2;
    multiplicacao2 = b * 3;
    multiplicacao3 = c * 5;
    total = multiplicacao1 + multiplicacao2 + multiplicacao3;
    
    media = total / (2 + 3 + 5);
    
    printf("MEDIA = %.1f", media);
    
	return 0;
}