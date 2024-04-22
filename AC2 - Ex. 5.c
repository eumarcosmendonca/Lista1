/*Descrição:
Faça programa que recebe um tempo dado em segundos e calcula quantos dias, horas, minutos e segundos ele representa.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int segundos, minutos, horas, dias, restoSegundosDias, restoSegundosHoras, restoSegundosMinutos;
    
    scanf("%d", &segundos);
    
    dias = segundos / 86400;
    restoSegundosDias = segundos % 86400;
    horas = restoSegundosDias / 3600;
    restoSegundosHoras = restoSegundosDias % 3600;
    minutos = restoSegundosHoras / 60;
    segundos = restoSegundosHoras % 60;

    printf("%d\n", dias);
    printf("%d\n", horas);
    printf("%d\n", minutos);
    printf("%d", segundos);
    
	return 0;	
}