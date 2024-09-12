// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

using namespace std;

int main(){

    vector<cow> cattle;

    cattle.push_back(cow("Pyari", 6, cow_purpose::meat));    
    cattle.push_back(cow("Dulari", 3, cow_purpose::pet));    
    cattle.push_back(cow("Gauri", 8, cow_purpose::dairy));  
    cattle.push_back(cow("Kumari", 2, cow_purpose::dairy));  

    cout<<"Name of first cow is "<<cattle.begin()->get_name()<<endl;  
    cout<<"Cow at index 1 is "<<cattle[1].get_name()<<endl;  
    cout<<"Next to last is "<<prev(cattle.end(),2)->get_name()<<endl;  
    cout<<"The last cow is "<<prev(cattle.end(),1)->get_name()<<endl;  //cattle.end()-1 will also work.

    std::cout << std::endl << std::endl;
    return (0);
}
