#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
#include "Armstrong.funciones.h"
using namespace std;


int main (int argc, char *argv[]){
  int parameter = stoi(argv[1]);
  if (Armstrong(parameter) == true){
    cout << parameter << " es un numero de Armstrong" << endl;
  }
  if (Armstrong(parameter)== false){
    cout << parameter << " no es un numero de Armstrong" << endl;
  }
}

