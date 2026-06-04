#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string>freq;
    freq[1]="apple";
    freq[2]="banana";
    freq[3]="orange";
    freq[4]="grapes";

    for(auto c:freq){
        cout<<c.first<<" : "<<c.second<<endl;
    }

}