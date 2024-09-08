// Learning C++ 
// Exercise 03_02
// Classes, by Eduardo Corpeño 

#include <iostream>
#include <string>
using namespace std;
enum class cow_purpose {dairy, meat, hide, pet};

class cow{

   public:
     cow(string name1, int age1, cow_purpose purpose1)
    {
        name = name1;
        age = age1;
        purpose1 = purpose;
    }
 
    string getname() const{
        return name;
    };

    int getage() const{
        return age;
    };

    cow_purpose get_purpose() const{
        return purpose;
    };
  private:
    string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow("Betsy", 5, cow_purpose::meat);
    
    cout << my_cow.getname() << " is a type-" << (int) my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.getname() << " is " << my_cow.getage() << " years old." << endl;
    
    cout << endl << endl;
    return (0);
}
