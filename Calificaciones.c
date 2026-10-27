/*León Flores Ángel Ricardo
Promedio de 5 calificaciones
Arreglos*/

#include <stdio.h>

int main()

{
  
  int arr[5], sum = 0, prom = 0; 
  
  //Llenado del arreglo
  for(int i = 0; i < 5; i++)
    {
      printf("Dame la calificación %i: ", i+1);
      scanf("%i", &arr[i]);
    }

  //Suma de las calificaciones
  for(int j = 0; j < 5; j++)
    {
      sum = sum + arr[j];
    }

  //Cálculo del promedio 
  prom = sum / 5; 
  printf("El promedio es %i\n", prom);
  return 0;
}
