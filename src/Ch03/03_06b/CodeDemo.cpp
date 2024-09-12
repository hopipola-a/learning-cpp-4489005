// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

using namespace std;
int main(){

    int a = 37;
    int *ptr; //* pointing to data 

    ptr = &a; //& = address of operator

    cout<<"a is: "<<a<<endl;
    cout<<"ptr is pointing to address: "<<ptr<<endl;
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Where ptr is pointing, the data there is: "<<*ptr<<endl;
     cout<<"Address of ptr is: "<<&ptr<<endl;
    std::cout << std::endl << std::endl;
    return (0);
}
