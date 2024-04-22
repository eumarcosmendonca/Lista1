/*Descrição:
Converter uma temperatura dada em graus Fahrenheit para graus Celsius.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    float fahrenheit, celsius;
    
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f", celsius);
    
	return 0;
}