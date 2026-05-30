#include<iostream>
using namespace std;
void print(int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n*2;j++){
            if(j==i || j==n*2-i){
                cout<<'*';

            }else{
                cout<<" ";
            }
           
        }
        cout<<endl;
    }
}

int main(){
 int n;
    n=4;
    print(n);
}