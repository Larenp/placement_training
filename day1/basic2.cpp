#include <iostream>
using namespace std;


float sum(float a, float b){
    return a+b;
}
int sum(int a, int b){
    return a+b;
}
int sum(char a, char b){
  a= stoi(a);
  b=stoi(b);
  double z=a+b;
  to_string(z);
  return z;
}
int main(){
    auto x='4';
    auto y='8';
    auto res=sum(x,y);
    cout<<res<<endl;;
    
} 

