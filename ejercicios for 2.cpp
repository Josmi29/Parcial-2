#include <stdio.h>
#include <math.h>

int main() 
{
    int n = 2; 
    float suma = 0; 

    for (int i = 1; i <= n; i++) 
	{
        suma += pow(i, 2); 
    }
    
    printf("La suma de los cuadrados de los primeros %d numeros enteros es: %f\n", n, suma);

    return 0;
}
