// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

using namespace std;

int main(){
    
    int farenhiet = 100;
    int celcius;

    celcius = ((float)5 / 9.0) * (farenhiet - 32);

    cout<<"Farenhiet: "<<farenhiet<<endl;
    cout<<"Celcius: "<<celcius<<endl<<endl;

    float weight = 10.99;

     cout<<"Float: "<<weight<<endl;
    cout<<"Int: "<<(int)weight<<endl;
    cout<<"fractional: "<< (int)((weight - (int) weight) * 10000)<<endl;

    return (0);
}
