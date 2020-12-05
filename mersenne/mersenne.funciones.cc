#include <iostream>
#include <cstring>
#include <vector>
#include <math.h>
#include "mersenne.funciones.h"
using namespace std;

// Funcion que muestra por pantalla el mensaje de error
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    cout << "Este programa necesita que al compilarlo introduzca un numero" << endl;
    exit (EXIT_SUCCESS);
  }
  if (argc == 1){
    cout << "Pruebe 'ejecutable -- help' para mas informacion " << endl;
    exit(EXIT_SUCCESS);
  }
  }

// Esta funcion te devuelve numeros primos
bool IsPrime(int number) {
  if (number == 0|| number == 1 || number == 4){
    return false;
  }
  for (int i = 2; i< number ; i++){
    if (number%i== 0){
      return false;
    }
    return true;
  }
}

// Esta funcion coge los valores primos de antes y los mete en el vector, en proporcion a lo que el usuario halla pasado por linea de comandos
int NumbersOfVector (vector <int> &vector_with_prime_numbers, int parameter, int current_number, int prime_number){
  for (int i = 0; i<parameter;i ++){
    do{
      ++current_number;
    }
    while(!IsPrime(current_number));
    if (IsPrime(current_number)){
      prime_number = current_number;
      vector_with_prime_numbers.push_back (current_number);
      ++ current_number;
    }
  }
}

// Esta funcion coge los valores del vector de antes y va pasando por todos los valores y aplicando la formula
int Mersenne (vector <int> &vector_with_prime_numbers, int parameter){
  int total_number = 0;
  int raised_number = 0;
  for (int i =0; i< parameter; i++){
    raised_number = pow (2, vector_with_prime_numbers[i]);
    total_number += raised_number;
  }
  return total_number;
}