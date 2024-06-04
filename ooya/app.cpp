#include <iostream>
#include "profile.hpp"
using namespace std;

int main() {
    Profile sam("Sam Drakkila", 30, "New York", "USA", "he/him");
    string bio = sam.viewProfile();
    cout << bio;
    return 0;
}