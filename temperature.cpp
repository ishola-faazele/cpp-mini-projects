#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <windows.h> 

using namespace std;

bool checkInputError();
bool convertAgain();

void convertFahrenheitToCelsius() {
    float fahrenheit;
    cout << "\n\nEnter the Fahrenheit temperature value:\t";
    cin >> fahrenheit;

    if (checkInputError()) {
        if (convertAgain()) {
            return;
        } else {
            exit(0);
        }
    }

    float celsius = (fahrenheit - 32) * 5 / 9;
    Sleep(500);
    cout << "\n\n" << fahrenheit << " Fahrenheit is equivalent to " << celsius << " Celsius" << endl;

    if (convertAgain()) {
        system("cls");
    } else {
        exit(0);
    }
}

void convertCelsiusToFahrenheit() {
    float celsius;
    cout << "\n\nEnter the Celsius temperature value:\t";
    cin >> celsius;

    if (checkInputError()) {
        if (convertAgain()) {
            return;
        } else {
            system("cls");
            cout << "APP CLOSED\n";
            exit(0);
        }
    }

    float fahrenheit = (celsius * 9 / 5) + 32;
    Sleep(500);
    cout << "\n\n" << celsius << " Celsius is equivalent to " << fahrenheit << " Fahrenheit" << endl;

    if (convertAgain()) {
        system("cls");
    } else {
        system("cls");
        cout << "APP CLOSED\n";
        exit(0);
    }
}

int main() {
    cout << "Temperature Converter App";

    while (true) {
        cout << "\n\nChoose an option:";
        cout << "\n  1. Convert from Fahrenheit to Celsius.";
        cout << "\n  2. Convert from Celsius to Fahrenheit.\n";
        
        int option;
        cin >> option;

        switch (option) {
            case 1:
                Sleep(500);
                convertFahrenheitToCelsius();
                break;
            case 2:
                Sleep(500);
                convertCelsiusToFahrenheit();
                break;
            default:
                cout << "Choose a valid option\n";
                Sleep(2000);
                system("cls");
                break;
        }
    }

    
    return 0;
}

bool checkInputError() {
    if (cin.fail()) {
        cout << "Invalid input. Please enter a numeric value." << endl;
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of the line
        return true;
    }
    return false;
}

bool convertAgain() {
    cout << "\n\nDo you want to convert again? (y/n): ";
    char option;
    cin >> option;
    return (option == 'y' || option == 'Y');
}
