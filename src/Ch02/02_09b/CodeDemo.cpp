// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstring>

using namespace std;
int main(){
    const size_t LENGTH1 = 25;

    char array_str1[LENGTH1] = "Hey guys! ";
    char array_str2[] = "What's up ";

    string std_str1 = "Hi everybody! ";
    string std_str2 = "How's it going. ";

    strncat(array_str1, array_str2, LENGTH1); //adding 

    cout<< array_str1 <<endl;
    cout<<  std_str1 + std_str2 <<endl; //adding

    cout << endl <<endl;
    return (0);
}
