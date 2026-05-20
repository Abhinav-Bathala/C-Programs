#include <iostream>

using namespace std;

/*
exercise 6-2. revisit the previous exercise, but instead of accessing the array values
using the loop counter, this time you should employ pointer increments (using the
++ operator) to traverse the array when outputting it for the first time. after that, use
pointer decrements (using --) to traverse the array again in the reverse direction.
*/

int main(){
    int* odd {new int[50]{}};
    size_t j = 0;

    for(size_t i = 1; i < 100; i += 2){
        *(odd + j) = i; 
        ++j;
    }

    int* ptr = odd; 
    cout << "Forward order:" << endl;
    for(size_t i = 1; i <= j; ++i){
        cout << *ptr << " "; 
        ++ptr;
        if(i % 10 == 0){
            cout << endl;
        }
    }
     
    --ptr;
    cout << endl << "Reverse order:" << endl;

    for(size_t i = 50; i >= 1; --i){
        cout << *ptr << " ";
        --ptr;
        if((i-1) % 10 == 0){
            cout << endl;
        }
    }
    
    delete[] odd;
    
    return 0;
}
