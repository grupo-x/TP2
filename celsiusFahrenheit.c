#include <stdio.h>
#include "Conversiones.h"

/*Programa que convierte temperaturas de Celsius a Fahrenheit y viceversa. De 0 grados a 300 grados con intervalos de 20 grados.*/

int main(void) 
{
	const int upper = 300, lower = 0, step = 20;
	
	printf("Celsius\t| Fahrenheit\n");
	
	for (int i = lower; i <= upper; i = i + 20)
	{
		printf ("%d\t| %4.1f\n", i, celsiusAFahrenheit(i));
	}
	
	printf("\n\nFahrenheit\t| Celsius\n");
	
	for (int i = lower; i <= upper; i = i + 20)
	{
		printf ("%d\t\t| %4.1f\n", i, fahrenheitACelsius(i));
	}
}


