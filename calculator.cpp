#include <iostream>
#include <cmath>

using namespace std;

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double exponent(double a, double b);
double modulo(double a, double b);

int main() {
    // find a way to extract inputs
    // find the right type of operation in the input
    // know how many operations are there
    // use loops to complete the number of operation
    // display the number of operations; notify invalid operations.
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if(b == 0) {
        cout  << "Error! Division by zero." << endl;
        exit(0);
    }

    return a/ b;
}

double exponent(double a, double b) {
    return pow(a, b);
}

double modulo(double a, double b) {
    return fmod(a, b);
}