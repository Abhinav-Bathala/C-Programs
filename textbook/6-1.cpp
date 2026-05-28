#include <iostream>

using namespace std;

/*
exercise 6-1. Write a program that declares and initializes an array with the first 50 odd
(as in not even) numbers. output the numbers from the array ten to a line using pointer
notation and then output them in reverse order, also using pointer notation.
*/

int main(){
    int* odd {new int[50]{}};
    size_t j = 0;

    for(size_t i = 1; i < 100; i += 2){
        *(odd + j) = i; 
        ++j;
    }

    cout << "Forward order:" << endl;
    for(size_t i = 1; i <= j; ++i){
        cout << *(odd + (i - 1)) << " "; 
        if(i % 10 == 0){
            cout << endl;
        }
    }
        
    cout << endl << "Reverse order:" << endl;
    size_t count = 0; 
    for(size_t i = 50; i >= 1; --i){
        cout << *(odd + (i - 1)) << " ";
        ++count;
        if(count % 10 == 0){
            cout << endl;
        }
    }
    
    delete[] odd;
    
    return 0;
}
