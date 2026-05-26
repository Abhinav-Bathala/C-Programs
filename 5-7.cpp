#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>
/*
exercise 5-7. Write a program that will read and store an arbitrary sequence of records 
relating to products. each record includes three items of data—an integer product 
number, a quantity, and a unit price. For product number 1001, the quantity is 25,  
and the unit price is $9.95. Because you do not know yet how to create compound 
types, simply use three different array-like sequences to represent these records.  
the program should output each product on a separate line and include the total cost. 
the last line should output the total cost for all products. Columns should align.


Example
Product             Quantity              Unit Price            Cost
1001                   25                   $9.95              $248.75
1003                   10                   $15.50             $155.00
                                                               $403.75
*/

using namespace std;

int main(){
    bool status {false};
    vector<int> product_list;
    vector<int> quantity_list;
    vector<double> unitprice_list; 

    while(!status){
        int product;
        int quantity;
        double price; 
        char choice; 

        cout << "Enter product number: ";
        cin >> product;
        cout << "Enter product quantity: ";
        cin >> quantity;
        cout << "Enter product price: ";
        cin >> price;

        product_list.push_back(product);
        quantity_list.push_back(quantity);
        unitprice_list.push_back(price);

        do{
            cout << "Do you still want to enter more inventory? (Y/N): "; 
            cin >> choice;
            
            if(cin.fail()){
                cin.clear();
                cin.ignore(10000, '\n');
    }
            choice = static_cast<char>(toupper(choice));
        } while(choice != 'Y' && choice != 'N');


        switch(choice){
            case('Y'):
                status = false;
                break;
            
            case('N'): 
                status = true; 
                break;
        }
    }

    size_t items{product_list.size()};
    double total{0};

    cout << left
         << setw(15) << "Products"
         << setw(15) << "Quantity"
         << setw(15) << "Unit Price"
         << setw(15) << "Price"
         << endl;

    cout << fixed << setprecision(2);

    for(int i = 0; i < items; ++i){
        total += unitprice_list[i]*quantity_list[i];

        cout << left
             << setw(15) << product_list[i]
             << setw(15) << quantity_list[i]
             << "$" << setw(14) << unitprice_list[i]
             << "$" << unitprice_list[i]*quantity_list[i]
             << endl;
    }

    cout << setw(45) << " "
         << "$" << total;

}
