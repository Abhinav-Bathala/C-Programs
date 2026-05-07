#include <iostream> 

/*
exercise 5-1. Write a program that outputs the squares of the odd integers from 1 up to 
a limit that is entered by the user.
*/
using namespace std; 

int main(){

    int limit;
    cout << "Enter a upper bound: "; 
    cin >> limit;

    for(int i = 1; i <= limit; ++i){
        cout << i*i << endl;
    }

    return 0;
}
