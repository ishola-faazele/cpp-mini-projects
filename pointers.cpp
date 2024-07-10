#include <iostream>
using namespace std;
float* takeInput(int& size);
float average(float* arr, int);

int main() {
    int size;
    float* arr = takeInput(size);
    cout << "Average: " << average(arr, size) << endl; // Call the average function and print the result
    return 0;
}

float average(float* arr, int arr_size) {
    float sum = 0;
    for(int i = 0; i < arr_size; i++) 
        sum+= arr[i];
    
    return sum / arr_size;
}

float* takeInput(int& size) {
    cout << "How many numbers:\t";
    cin >>  size;
    float* arr = new float[size]; // saving it dynamically so that we can access it outside the function
    for(int i = 0; i < size; i++) {
        int number;
        cout << "Enter number:\t";
        cin >> *(arr + i); // arr[i] = *(arr + i)
    }
    return arr;
}