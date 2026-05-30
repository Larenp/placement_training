#include <iostream>
using namespace std;

void printfull(int n) //5
{
    for(int i=1;i<=n;i++){
        cout<<"*"; //*****
    }
}
void printhalf(int n)
{
    for(int i=1;i<=n;i++){ //5
        if(i==1 || i==n){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }
}
int main()
{
    int n;
   n=4;
    for (int i = 1; i <= n; i++)
    {
        if(i ==1 ||i ==n ){
            printfull(n);
            cout<<endl;
        }else{
            printhalf(n);
            cout<<endl;

        }
    }

} 
