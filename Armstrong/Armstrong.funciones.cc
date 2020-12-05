#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
#include "Armstrong.funciones.h"
using namespace std;

// Esta funcion devuelve si un numero es de Armstrong o no, utilizando un bucle while en el que se va dividiendo el numero entre diez 
// Tambien se va sumando a un contador el numero de digitos
bool Armstrong (int parameter){
  vector <int> digits;
  int number_of_digits {0};
  int real_number {parameter};
  while (parameter != 0){
    digits.push_back (parameter % 10);
    parameter /= 10;
    ++number_of_digits;
  }
  int armstrong_number {0};
  for (int i = 0; i< number_of_digits; i++){
    armstrong_number += pow(digits[i],number_of_digits);
  }
  return (armstrong_number == real_number);
}