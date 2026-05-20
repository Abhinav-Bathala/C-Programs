#include <iostream>
#include <cmath>

using namespace std;

/*
exercise 6-3. Write a program that reads an array size from the keyboard and
dynamically allocates an array of that size to hold floating-point values. Using pointer
notation, initialize all the elements of the array so that the value of the element at
index position n is 1 / (n + 1)2. Calculate the sum of the elements using array notation,
multiply the sum by 6, and output the square root of that result.
*/

int main(){

    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    double* arr{new double[size]{}};
    double* ptr = arr; 
    
    for(size_t i = 0; i < size; ++i){
        *ptr = (1 / pow((i + 1), 2));
        ++ptr;
    }

    --ptr;
    double sum = 0;
    for(size_t i = 0; i < size; ++i){
        sum += arr[i];
    }

    cout << sqrt(sum*6);
    delete[] arr;
    
    return 0;
}
