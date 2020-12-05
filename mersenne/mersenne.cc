// Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// Mersenne Practica09 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>
#include <iostream>
#include <cstring>
#include <vector>
#include <math.h>
#include "mersenne.funciones.h"
using namespace std;


int main (int argc,char *argv[]){
  usage (argc, argv);
  int parameter = atoi(argv[1]);
  int prime_number;
  int current_number = 0;
  vector <int>  vector_with_prime_numbers;
  NumbersOfVector (vector_with_prime_numbers, parameter, current_number, prime_number);
  cout << "la suma de los " << parameter << " primeros numeros de Mersenne es: " << Mersenne(vector_with_prime_numbers, parameter) << endl;
  return 0;
  



}   
  


