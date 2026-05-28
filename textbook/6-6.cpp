#include <iostream>
#include <cmath>
#include <memory>
#include <vector>

using namespace std;

/*
exercise 6-6. revisit exercise 6-4 and replace any raw pointers with smart pointers
there as well.
*/

int main(){

    int size; 
    cout << "Enter the size of the array: ";
    cin >> size;

    auto vec_ptr {make_unique<vector<double>>()};

    for(size_t i = 0; i < size; ++i){
        vec_ptr -> push_back((1 / pow((i + 1), 2)));
    }
    
    double sum = 0;
    for(size_t i = 0; i < size; ++i){
        sum += (*vec_ptr)[i];
    }

    cout << sqrt(sum*6);
    
    return 0;
}
