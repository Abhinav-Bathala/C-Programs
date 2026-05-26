#include <iostream> 
#include <cctype>

/*
exercise 5-3. Create a program that uses a do-while loop to count the number of 
nonwhitespace characters entered on a line. the count should end when the first  
# character is found.
*/
using namespace std;

int main(){
    char message[100];
    cout << "Enter a message: ";
    cin.getline(message, 100); 
    int count{0};  
    char character;
    int i{0};

    do{
        character = message[i];
        if (!isspace(character) && character != '#'){
            count++; 
        }
        i++;
    } while(character != '#' && character != '\0'); 


    cout << count;
    return 0;

}
