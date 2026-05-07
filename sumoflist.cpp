#include <iostream> 
#include <vector> 
#include <cctype>

/*
exercise 5-2. Write a program that uses a while loop to accumulate the sum of an 
arbitrary number of integers entered by the user. after every iteration, ask the user 
whether he or she is done entering numbers. the program should output the total of all 
the values and the overall average as a floating-point value.
*/
using namespace std; 

int main(){
    bool validate = false;  
    char status; 
    int total{0}; 
    vector<int> num; 

    while(validate == false){  
        int enter;
        cout << "Enter a number: ";
        cin >> enter; 
        num.push_back(enter);

        do{
            cout << "Are you done entering numbers? (Y for Yes, N for No): "; 
            cin >> status; 

        }while(static_cast<char>(toupper(status)) != 'Y' && static_cast<char>(toupper(status)) != 'N');

        
        
        if(toupper(status) == 'Y'){
            validate = true;
        }
    }

    for(int i : num){
        total += i;
    }
    cout << "Sum of all the numbers: " << total << "\nAverage: " << static_cast<double>(total) / num.size();
    
    return 0;
}
