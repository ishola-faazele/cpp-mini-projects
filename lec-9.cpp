#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() const = 0;
        virtual ~Shape() {};
};

class Circle: public Shape {
    public:
        void draw() const override {
            cout << "Drawing a circle" << endl;
        }
};

class Square : public Shape {
    public:
        void draw() const override {
            cout << "Drawing a square\n";
        }
};


int main() {
    const int SIZE =4;
    Shape* shapes[SIZE];
    shapes[0] = new Circle();
    shapes[1] = new Square();
    shapes[2] = new Circle();
    shapes[3] = new Square();

    for(int i = 0; i < SIZE; i++) 
        shapes[i]->draw();
    
    for(int i =0; i < SIZE; i++) 
        delete shapes[i];
};