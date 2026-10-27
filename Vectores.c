/*León Flores Ángel Ricardo 
Cambio de las posiciones de un vector 
Arreglos*/

#include <stdio.h>

int main ()

{
  
  int arr1[6], arr2[6];
  int indice = 0;
  
  for(int i = 0; i < 6; i++)
  {
    printf("Dame un valor entero: ");
    scanf("%i", &arr1[i]);
  }
  printf("El arreglo original es: ");
  for(int j = 0; j < 6; j++)
  {
    printf("%i ", arr1[j]);
  }
  printf("\n\n");
  for(int k = 5; k < 0; k--)
  {
    arr2[indice] = arr1[k];
    indice++;
  }
  for(int l = 0; l < 6; l++)
  {
    printf("%i ", arr2[1]);
  }
  printf("\n");
  return 0;
}
