// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>

#include<cstdint>
using namespace std;
#define DEBUG
#define CAPACITY 5000

int main(){
    
    int32_t large = CAPACITY;
    uint8_t small =  37;
#ifdef DEBUG
    cout<<"About to perform task"<<endl;
#endif
    large += small;

    cout<<"Sum of Large is "<<large<<endl;
    
    return (0);
}
