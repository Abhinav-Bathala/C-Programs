#include <iostream> 
#include <array>

/*
exercise 5-8. the famous Fibonacci series is a sequence of integers with the first  
two values as 1 and the subsequent values as the sum of the two preceding values.  
so, it begins 1, 1, 2, 3, 5, 8, 13, and so on. Create an array<> container with 93 elements. store the first 93 
numbers in the Fibonacci series in the array and then output them one per line.  
any idea why we’d be asking you to generate 93 Fibonacci numbers and not, say, 100?
*/


using namespace std; 

int main(){
    
    const size_t length{93};
    array<double, length> series; 
    series[0] = 1;
    series[1] = 1; 

    for(size_t i = 2; i < length; ++i){
        series[i] = series[i-1] + series[i-2];
    }

    for(size_t i = 0; i < length; ++i){
        cout << series[i] << endl;
    }

    return 0;
}
