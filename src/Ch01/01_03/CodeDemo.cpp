// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;

int main(){
    std::string str;
    cout<<"Enter your name: ";
    std::cin >> str;
    cout<<"Your name is: "<<str;
  
    std::cout << std::endl << std::endl;
    return (0);
}
