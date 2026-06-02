#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string substr(int st, int end,string orginal_string){
    string s;
    for(int i=st;i<end;i++){
        s+=orginal_string[i];
    }
    return s;
}
int main(){
    int st,end;
    string orginal_string;
    cout<<"Enter the string "<<endl;
    getline(cin,orginal_string);
    cout<<"Enter the stating and ending index "<<endl;
    cin>>st>>end;
    cout<<substr(st,end,orginal_string)<<endl;
    return 0;
}