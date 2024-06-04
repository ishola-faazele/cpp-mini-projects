#include <iostream>
using namespace std;

inline int sum_first_n(int);
inline float convert_length(float);
int fib(int);

int main() {
    // int n;
    // cout << "Enter an integer: ";
    // cin >> n;
    // int first_n = sum_first_n(n);
    // cout << "\nThe sum of the first " << n << "integers is " << first_n; 
    int fib_n = fib(3);
    cout << fib_n;
}

inline int sum_first_n(int n) {
    return n*(n + 1) / 2;
}
inline float convert_length(float length) {
    return 0.0328084 * length;
}

int fib(int n) {
    if(n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}