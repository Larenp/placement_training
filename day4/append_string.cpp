#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
/*
string append(string s1,string s2){
    s1=s1+s2;
    return s1;
}
*/
// Append is joining string 1 to string 2 without extra string.
string append(string s1,string s2){
    for(int i=0;i<s2.length();i++){
    s1+=s2[i];
    }
    return s1;
}

int main(){
    string s1,s2;
    cout<<"Enter the input string "<<endl;
    getline(cin,s1);
    getline(cin,s2);
    cout<<"Appended string :"<<endl;
    cout<<append(s1,s2);
    return 0;
}


