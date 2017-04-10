#include <stdio.h>
#include <stdlib.h>

/*Programa que convierte temperaturas de Celsius a Fahrenheit y viceversa. De 0 grados a 300 grados con intervalos de 20 grados.*/

float celsiusAFahrenheit(int temperatura)
{
	return (9.0/5.0) * temperatura + 32;
}

float fahrenheitACelsius(int temperatura)
{
	return (5.0/9.0) * (temperatura - 32);
}

int main(void) 
{
	const int upper = 300, lower = 0, step = 20;
	
	printf("Celsius\t| Fahrenheit\n");
	
	int i = 0;
	
	for (i = lower; i <= upper; i = i + 20)
	{
		printf ("%d\t| %4.1f\n", i, celsiusAFahrenheit(i));
	}
	
	printf("\n\nFahrenheit\t| Celsius\n");
	
	i = 0;
	
	for (i = lower; i <= upper; i = i + 20)
	{
		printf ("%d\t\t| %4.1f\n", i, fahrenheitACelsius(i));
	}
}


