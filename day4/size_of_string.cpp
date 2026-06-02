#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int strleng(string orginal_string){
    int i=0; 
    while(orginal_string[i] !='\0'){ //'\0' is the null 
        i++;
    }
    return i;
}
int main(){
    string orginal_string;
    getline(cin,orginal_string);
    cout<<"Length of string"<<endl;
    cout<<strleng(orginal_string);
    return 0;
}

/*
Using for each loop
int strleng(string orginal_string){
    int count=0; 
    for(auto c: orginal_string){
    count++
    }
    return count;
}
*/