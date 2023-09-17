/*
// Escribir en lenguaje C un programa que muestre por pantalla la sucesión denúmeros: 1 -1 2 -2 3 -3 4 -4 5 -5
#include <stdio.h>

int main()
{
	int numero;
    printf( "Ingrese los numeros que desee:  " );
    scanf("%d",&numero);
    printf("\nLos numeros que aparecen en la primera fila representan son positivos y los de la segunda fila son los numeros negativos: \n");
    for ( int x = 1 ; x <= numero ; x++ )
    {
        printf( "%d , %d \n", x, -x );
    }
    printf("Los numeros que solicito aparecen en la pantalla :)");
    
    printf("\a");
    return 0;
}
|*/

//Suma de cuadrado de N numeros
//Escribir en lenguaje C un programa que calcule la suma de los cuadrados de los100 primeros números enteros.
#include <stdio.h>

int main()
{
	int num;
	int suma;
	
	printf("Ingrese el numero que usted quiera: ");
	scanf("%d",&num);
	for(int x=1; x<=num; x++)
	{
		suma = suma + (x*x);
		
	}
	printf("La suma de los cuadrados de los primeros %d numeros es: %d",num,suma );
	
	printf("\a");
	return 0;
}