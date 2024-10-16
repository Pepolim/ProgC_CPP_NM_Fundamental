#include <stdio.h>

int main()
{

  int average;
  int grades[] = {80, 85, 90, 95, 100}; // declarar array [n]

  int tamanho = (sizeof(grades) / sizeof(grades[0]));

  // Mostar os elementos do array usando um ciclo for.
  
  for (int i = 0; i < tamanho; i++) {
        printf("grades: %d\n", grades[i]);
    }

  // Mostar os elementos do array usando um ciclo for.
  
  
  
  // Calcular a média usando um ciclo (for ou while)

  average = (grades[0] + grades[1] + grades[2]) / 3;

  printf("The average of the 3 grades is: %d", average);

  return 0;
}