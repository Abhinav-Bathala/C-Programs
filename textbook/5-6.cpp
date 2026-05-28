#include <iostream>
#include <vector>

/*
exercise 5-6. Create a vector<> container with elements containing the integers from 
1 to an arbitrary upper bound entered by the user. output the elements from the vector 
that contain values that are not multiples of 7 or 13. output them 10 on a line, aligned 
in columns.
*/

using namespace std;

int main(){
    int bound;
    cout << "Enter upper bound: "; 
    cin >> bound; 
    vector<int> values;
    
    for(int i = 1; i <= bound; ++i){
        if((i % 7 != 0) && (i % 13 != 0)){
            values.push_back(i);
        }
    }

    for(int i = 1; i < size(values); ++i){
        cout << values[i-1] << "\t"; 
        if (i % 10 == 0){
            cout << endl;
        }
    } 
}
