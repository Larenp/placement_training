#include <iostream>
using namespace std;

int main() {
    int num=123321;
    int res=num;
   
    int rev=0;
    while(num>0){
       int  d=num%10;
       rev=rev*10+d;
        num /= 10;
    }
    if(res==rev){
        cout<<"it is palindrom"<<endl;
    }else{
          cout<<"it is not palindrom"<<endl;
    }
}