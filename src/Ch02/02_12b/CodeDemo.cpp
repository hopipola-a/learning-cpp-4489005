// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

enum class cow {meat, dairy, pet};
enum class grocery{sport,meat, dairy, pet};
int main(){

    int meat = 8;
    grocery a;

    a = grocery::meat;

    cout<<"Value of a: "<< (int) a<<endl;
   
    return (0);
}
