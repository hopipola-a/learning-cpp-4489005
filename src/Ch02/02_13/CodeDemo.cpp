// Learning C++ 
// Challenge 02_13
// Calculate an Average, by Eduardo Corpeño 

#include <iostream>
#include <array>
using namespace std;

int main(){
    int nums[5] = {1,23,32,24,337};
    float result; 
    
  // result = nums[0] + nums[1] + nums[2] + nums[3] + nums[4];
  // result /=5;

    for(int i = 0; i < 5; i++)
    {   
        result += nums[i];
    }
    
    result /= 5;
    
    std::cout << "The average is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
