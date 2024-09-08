// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;
    

enum class cow_p {dairy, meat, pet};

struct cow
{
    int age;
    string name;
    cow_p purpose;
};

using namespace std;

int main(){
    
    cow mycow;

    mycow.age = 5;
    mycow.name = "Hana";
    mycow.purpose = cow_p::dairy;

    cout<<"My cow's name is "<<mycow.name<<" and she is "<<mycow.age<<" years old."<<endl;
    cout<<"My cow "<<mycow.name<<" is a type-"<<(int) mycow.purpose<<" cow."<<endl;
   
    return (0);
}
