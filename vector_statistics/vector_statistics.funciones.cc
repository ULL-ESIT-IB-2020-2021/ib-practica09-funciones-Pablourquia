  #include "vector_statistics.funciones.h"
#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <time.h>
#include <cstring>
using namespace std;

// Esta funcion te muestra el mensaje de ayuda
void usage (int argc, char *argv[]){
  if (argc == 2 && strcmp(argv[1], "--help") == 0){
    cout << "Este programa necesita que al compilarlo introduzca tres numeros, el primero el tamaño del vector y los otros dos son los limites en la generacion aleatoria de numeros" << endl;
  exit (EXIT_SUCCESS);
  }  
}

// Esta dos funciones generan los numeros aleatorios en el rango que nos interesa y los mete en el vector
double frand(double fMin, double fMax) {
  double f = (double)rand() / RAND_MAX;
  return fMin + f * (fMax - fMin);
}

vector <double> RandomNumbersGen(double components, double lower_limit, double upper_limit){
  vector <double> RandomsNumbers;
  srand(time(NULL));
  for(int i= 1; i<=components;i++){
    double random_number = frand (lower_limit, upper_limit);
    RandomsNumbers.push_back(random_number);
  }
  return RandomsNumbers;
}

// Esta funcion calcula la media de todos esos numeros
double Media(vector <double> total,double components){
  double sum = 0;
  for (int i =0; i<components; i++){
    sum +=total[i];
  }
  double media = sum / components;
  return media;
}

//Esta funcion calcula el valor maximo
double MaximumValue (vector <double> total){
  double maximum_value = 0; 
  for (int i=0; i<total.size(); i++){
    if (total[i] > maximum_value){
     maximum_value = total[i];
    }
  }
  return maximum_value;
}

//Esta funcion calcula el valor minimo
double MinimumValue (vector <double> total, double upper_limit){
  double minimum_value = upper_limit; 
  for (int i=0; i<total.size(); i++){
    if (total[i] < minimum_value){
      minimum_value = total[i];
    }
  }
  return minimum_value;
}

//Esta funcion hace la suma
double Sum (vector <double> total, double components){
  double sum = 0;
  for (int i = 0; i< components; i++){
    sum += total[i];
  }
  return sum;
}

//Esta funcion hace el producto
double Product (vector <double> total, double components){
  double product = 1;
  for (int i =0 ; i<components; i++){
    product = product * total[i];
  }
  return product;
}