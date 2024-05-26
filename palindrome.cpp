#include <iostream>
#include <string>
#include <stdlib.h>

bool is_palindrome(std::string word);

int main() {
    do
    {
        std::string word;
        std::cout << "Enter A Word:\t";
        std::cin >> word;
        const bool value = is_palindrome(word);
        
        if(value) {
            std::cout << word << " is a palindrome\n\n";
        }
        else {
            std::cout << word << " is not a palindrome\n\n";
        }

        int option;
        std::cout << "Do you wish to continue ? Choose an option:\n";
        std::cout << "\t1. Yes\n";
        std::cout << "\t2. No \n";
        std::cin >> option;
        if(option == 2) {
            // system.clear();
            break;
        }
        else {
            // system.clear();
        }
        
    } while (true);
    
    return 0;
}


bool is_palindrome(std::string word) {
    int i {0};
    int j {word.length() - 1};
    while (i <= j) {
        if(word[i] != word[j]) {
            return false;
        }
        else {
            i++;
            j--;
            is_palindrome(word.substr(i, j + 1));
        }
    }
    return true;
}

