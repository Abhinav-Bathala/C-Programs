#include <iostream>
#include <cmath>
#include <memory>

using namespace std;

/*
exercise 6-5. revisit exercise 6-3, but this time use a smart pointer to store the array,
that is, if you haven’t already done so from the start. a good student should’ve known
not to use the low-level memory allocation primitive
*/

int main(){

    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    auto arr {make_unique<double[]>(size)};
    
    for(size_t i = 0; i < size; ++i){
        *(arr.get() + i) = (1 / pow((i + 1), 2));
    }

    double sum = 0;
    for(size_t i = 0; i < size; ++i){
        sum += *(arr.get() + i);
    }

    cout << sqrt(sum*6);
    
    return 0;
}
