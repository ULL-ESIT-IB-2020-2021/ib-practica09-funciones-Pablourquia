// Universidad de La Laguna
// Escuela Superior de Ingerniería y Tecnología
// Grado en Ingerniería Informática
// Curso; 1º
// Find first of Practica09 - Funciones
// Autor: Pablo Urquia Adrian <alu0101398327@ull.edu.es>
#include <iostream>
#include <string>
#include <cstring>
#include "find_first_of.funciones.h"
using namespace std;


int main(int argc, char *argv[]){
  usage (argc, argv);
  string word =argv[1];
  string character_to_find = argv[2];
  cout << PositionOfCharacter(word, character_to_find) << endl;
}