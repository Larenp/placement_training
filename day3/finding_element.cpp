#include<iostream>
using namespace std;
int main(){
int arr[5]={1,2,3,4,5};
bool flag=false;
int target =4;
cout<<"Before"<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<"\t";
}
cout<<endl;
for(int i=0;i<5;i++){
    if(arr[i]==target){
         arr[i]=-1;
        flag=true; 
        break;
    }
}

if(flag == true){
    cout<<"element found"<<endl;
}else{
    cout<<"elemnt not found"<<endl;
}
cout<<"After"<<endl;
for(int i=0;i<5;i++){
    cout<<arr[i]<<"\t";
}
return 0;
}