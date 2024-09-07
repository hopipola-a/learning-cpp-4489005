// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

using namespace std;
//#define AGE_LENGTH 4
int main(){
    const size_t AGE_LENGTH = 4;
    int age[AGE_LENGTH];

    float temp[] = {50.5, 25.2, 2.2};
    
    age[0] = 1;
    age[1] = 12;
    age[2] = 61;
    age[3] = 52;
    cout<<AGE_LENGTH<<endl;
    cout<<age[3]<<endl;

    cout<<temp[0];
    std::cout << std::endl << std::endl;
    return (0);
}
