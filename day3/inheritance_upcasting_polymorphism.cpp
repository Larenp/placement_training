#include<iostream>
using namespace std;

class Animal{
public:
virtual void sound(){
    cout<<"Animal makes a sound"<<endl;
}
};
class Dog: public Animal{
public:
void sound(){
    cout<<"Dog barks"<<endl;
}
};
int main(){
  /**  Dog d;  
    d.sound();  // Output: Dog barks
    Animal a;
    a.sound();  // Output: Animal makes a sound
    */
    
    Animal* a =new Dog(); // Upcasting
    a->sound();
 // put vitrual keyword in parent class to achieve runtime polymorphism
 // without virtual keyword it will call parent class function instead of child class function
  return 0;
}
