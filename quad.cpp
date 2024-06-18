#include <iostream>
#include <string>
using namespace std;

class Quadrilateral {
    private:
        float x;
        float y;
    public:
        void set_values(float a, float b) {
            x = a;
            y = b;
        }
        float area() {
            return x * y;
        }
};
int main(){
    Quadrilateral quad1;
    quad1.set_values(3, 4);
    float area = quad1.area();
    cout << area;
}

