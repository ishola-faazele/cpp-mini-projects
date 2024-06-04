#include <iostream>
using namespace std;
void zeroSmaller(int&, int&);
int main() {
    int a = 3;
    int b = 1;
    zeroSmaller(a, b);
    cout << a << b;
}

void zeroSmaller(int& a, int& b) {
    if (a < b) {
        a = 0;
    }
    else if (b < a) {
        b = 0;
    }
}
