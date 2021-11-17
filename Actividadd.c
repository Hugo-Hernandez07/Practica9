#include <stdio.h>
int main ()
 {
 int cos[10] = {10, 5, 7, 15, 20, 4, 9, 12, 8, 11};
 float suma = 0, prom;
 int i;
 while (i<10){
 suma += cos[i];
 i++;
 }
 prom = suma/10;
 printf("la sumatoria del vector es: %f", suma);
 printf("la media aritmetica es: %f", prom);
 }
