#include <iostream>
using namespace std;

int main() {
    int num=123456;
   
    int sum=0;
    while(num>0){
       int  rem=num%10;
       sum +=rem;
        num=num/10;
    }
    cout<<sum;
}