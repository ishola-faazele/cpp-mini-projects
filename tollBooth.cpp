#include <iostream>
using namespace std;

class tollBooth {
    private:
        unsigned int totalCars;
        double totalAmt;
    
    public:
        tollBooth() {
            totalCars = 0;
            totalAmt = 0;
        }

        tollBooth(int newTotalCars, double newTotalAmt) {
            totalCars = newTotalCars;
            totalAmt = newTotalAmt;
        }

        void payingCar() {
            totalCars++;
            totalAmt+= 0.5;
        }

        void noPayingCar() {
            totalCars++;
        }

        const void display() {
            cout << "The total number of cars that has passed this toll booth is: " << totalCars << endl;
            cout << "The total amout collected is: " << totalAmt << " cedis." << endl;
        }
};

int main() {
    tollBooth tollBooth1(1, 0.5);
    tollBooth1.display();
}