#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

/*
exercise 6-4. repeat the calculation in exercise 6-3 but using a vector<> container
allocated in the free store. test the program with more than 100,000 elements. do you
notice anything interesting about the result?
*/

int main(){

    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<double>* vec_ptr = new vector<double>;
    
    for(size_t i = 0; i < size; ++i){
        vec_ptr -> push_back((1 / pow((i + 1), 2)));
        
    }

    double sum = 0;
    for(size_t i = 0; i < size; ++i){
        sum += (*vec_ptr)[i];
    }

    cout << sqrt(sum*6);
    delete vec_ptr;
    
    return 0;
}
