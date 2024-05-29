#include <iostream>
using namespace std;

double exponent(double, int);
double exponent_recurse(double, int);
int main() {
    const double results = exponent_recurse(5, 3);
    cout << results;
}

double exponent(double n, int p = 2) {
    double results = 1 ;
    for (int i = 0; i < p; i++) {
        results *= n;
    }
    return results;
}

double exponent_recurse(double n, int p = 2 ) {
    static double results = 1;
    if (p == 0) {
        return 1;
    }
    else {
        return n * exponent_recurse(n, p -1);
    }
}