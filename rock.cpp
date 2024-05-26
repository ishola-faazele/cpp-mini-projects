#include <iostream>
#include <stdlib.h>

int main() {
    while(true) {
        char game_state;
        srand (time(NULL));
        const int computer = rand() % 3 + 1;
        int user = 0;

        std::cout << "====================\n";
        std::cout << "rock paper scissors!\n";
        std::cout << "====================\n";

        std::cout << "1) ✊\n";
        std::cout << "2) ✋\n";
        std::cout << "3) ✌️\n";
        std::cout << "shoot!\t";

        std::cin >> user;

        switch (computer) {
            case 1:
                std::cout << "\n\nComputer Chose Rock\n\n";

                if(user == 1) {
                    std::cout << "Draw\n\n";
                }
                else if(user == 2) {
                    std::cout << "You Won\n\n";
                }
                else if(user == 3) {
                    std::cout << "Computer Won\n\n";
                }
                else {
                    std::cout << " Invalid Input\n\n";
                }
                break;

            case 2:
                std::cout << "\n\nComputer Chose Paper\n\n";
                if(user == 1) {
                    std::cout << "Computer Won\n\n";
                }
                else if(user == 2) {
                    std::cout << "Draw\n\n";
                }
                else if(user == 3) {
                    std::cout << "You Won\n\n";
                }
                else {
                    std::cout << "Invalid Input\n\n";
                }
                break;

            case 3:
                std::cout << "\n\nComputer Chose Scissors\n\n";
                if(user == 1) {
                    std::cout << "You Won\n\n";
                }
                else if(user == 2) {
                    std::cout << "Computer Won\n";
                }
                else if(user == 3) {
                    std::cout << "Draw\n\n";
                }
                else {
                    std::cout << "Invalid Input\n\n";
                }
                break;

            default:
                std::cout << "\n\nSomething Went Wrong\n\n";
                break;
        }

        std::cout << "\n\nNew Game? (y / n):\t";
        std::cin  >> game_state;
        
        if(game_state == 'y' || game_state =='Y'){
            #ifdef _WIN32 // For Windows
                std::system("cls");
            #else // For Unix/Linux/MacOS
                std::system("clear");
            #endif
        }
        else {
            break;
        }
    }

    
    return 0;
}