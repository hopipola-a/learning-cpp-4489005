// Learning C++ 
// Exercise 04_03
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> numbers = {12, 25, 31, 47, 58};
    
    auto ptr = numbers.begin();
    auto nj = numbers.begin();
    
    while (ptr != numbers.end())
    {
       cout<<*ptr<<" ";
       ptr = next(ptr , 1);
    }
    
    cout<<endl;
    int i = 0;
    do
    {  
        cout<<numbers[i]<<" ";
        i++;

    } while (i< numbers.size());
    
    cout<<endl;
    int j = 0;
    while(j<numbers.size())
    {
        cout<<numbers[j]<<" ";
        j++;
    }

    cout<<endl;
    
    do
    {
        cout<<*nj<<" ";
       nj = next(nj , 1);
        
    } while (nj != numbers.end());
    

    return (0);
}
