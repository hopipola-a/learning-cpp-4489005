// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(){
    
   vector<int> primes;
   primes.push_back(2);
   primes.push_back(3);
   primes.push_back(4);
   primes.push_back(5);
   primes.push_back(6);

   cout<<"The vector has "<<primes.size()<<" elements."<<endl;
    //primes[2] = 13;
   cout<<"The element at index 2 is: "<<primes[2]<<endl;

    return (0);
}
