#include <iostream>
#include <vector>
using namespace std;

void usage (int argc, char *argv[]);
bool IsPrime(int number);
int NumbersOfVector (vector <int> &vector_with_prime_numbers, int parameter, int current_number, int prime_number);
int Mersenne (vector <int> &vector_with_prime_numbers, int parameter);