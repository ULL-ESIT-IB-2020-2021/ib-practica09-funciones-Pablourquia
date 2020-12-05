  // Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// Difference_of_squares Practica08 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <time.h>
#include <cstring>
#include "vector_statistics.funciones.h"
using namespace std;


int main (int argc, char *argv[]){
  usage (argc, argv);
  double components = atoi(argv[1]);
  double lower_limit = atoi(argv[2]);
  double upper_limit = atoi(argv[3]);
  vector <double> total = RandomNumbersGen (components, lower_limit, upper_limit);
  cout << "La media es : " << Media (total, components) << endl;
  cout << "La suma es  : " << Sum (total, components) << endl;
  cout << "El producto es : " << Product (total, components) << endl;
  cout << "El maximo es " << MaximumValue(total) << endl;
  cout << "El minimo es " << MinimumValue(total, upper_limit) << endl;
  return 0;
}
   