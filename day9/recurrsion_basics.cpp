#inclde<iostream.h>
using namespace std;
int sum(int a,int b){
   inline int sum=a+b;
    if(sum==10){
        return 0;
    }else{
        sum(a+1,sum);
    }
    retrun "a";
}
int main(){
    int a(2);
    int b(1);
    cout<<sum(a,b);
}