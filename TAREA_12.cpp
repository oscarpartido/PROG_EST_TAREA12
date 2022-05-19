/* autor:Oscar Vivaldi Partido Ramirez  realizado: 21/02/2022
programa  que calcula la suma de la serie 1/1 1/2 1/3... 1/N
donde
-N es un numero que se introduce por teclado 
*/
#include <stdio.h>

int main(){
	int i=1;
	float N,serie, suma=0;
	
	printf("Introduce el numero: ");
	scanf("%f",&N);
	
	while (N>=i){
		
		serie=1.0/i;
		suma=suma+serie;
	
		
		i++;
	}
		printf("\n%.2f",suma);
		
	
	
	return 0;
} 

