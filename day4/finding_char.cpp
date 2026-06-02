#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
void find(char target,string orginal_string){
    string s;
    for(int i=0;i<orginal_string.length();i++){
       if(orginal_string[i]==target){
        cout<<"char found"<<endl;
        break;
       }else{
        cout<<"char not found"<<endl;
        
       }
    }

}
int main(){
    char target;
    string orginal_string;
    cout<<"Enter the string "<<endl;
    getline(cin,orginal_string);
    cout<<"Enter the target char"<<endl;
    cin>>target;
    find(target,orginal_string);
    return 0;
}