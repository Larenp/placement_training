#include<iostream>
using namespace std;
class rectnagel{
    public:
    int length;
    float breadth;
rectnagel(int l,float b):length(l),breadth(b){
}
    rectnagel& operator+(rectnagel& rhs){ // operator overloading
    this->length = this->length + rhs.length;
    this->breadth = this->breadth + rhs.breadth;
    return *this;
}
};
int main(){
    rectnagel r1(5,10.5);
    rectnagel r2(10,20.5);
    rectnagel r3 =r1+r2;
    cout<<"length: "<<r3.length<<endl<<"breadth: "<<r3.breadth<<endl;
    return 1;

}