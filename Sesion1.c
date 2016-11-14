En una asignatura de la titulación la práctica vale el 60% de la nota y la teoría
el 40%. Aquí tienes un programa en lenguaje C para calcular la nota de un alumno

#include <stdio.h>

int main() //Función: resuelve un algoritmo
{
  //Aquí va todo el flujo del programa

  /*Aquí va todo el
  flujo del programa
  */
  float notaPractica = 0;
  float notaTeoria = 0;

  printf("Tú parguelas dame tu nota de práctica: \n");
  scanf("%f", &notaPractica); //Espero un float que voy a poner en la variable notaPractica
  printf("Nota de teoría: ");
  scanf("%f", &notaTeoria);

  notaPractica = notaPractica*60/100;
  float notaFinal = notaPractica + (notaTeoria*40/100);
  printf("Tu nota final es: %f", notaFinal); //Voy a imprimir un Float (%f) que es la vatiable notaFinal

  if(notaFinal >= 5 && notaFinal <= 10) //sI SE CUMPLE LA CONDICIÓN, HAZ TODO LO QUE HAY ENTRE LLAVES
  {
    printf("Enhorabuena, has aprobado chaval");
  }
  else if(notaFinal == 10)
  {
    printf(", Matricula de honor");
  }
  else
  {
    printf("Has suspendido");
  }
}
