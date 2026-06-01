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

//Note: If u add virtual keyword in parent class then if u do upcasting also u cannot access the parent class method and it will call the child class method. This is called runtime polymorphism.

//Note: with virtual keyword it becomes overloading, and without it becomes overriding