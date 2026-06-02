#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
string reverse1(string s){
stringstream ss(s);
string word;
vector<string>v;
while(ss>>word){
    v.push_back(word);
}
reverse(v.begin(),v.end());
for(int i=0;i<v.size();i++){
    cout<<v[i];
    cout<<" ";
}
return "";

}
int main(){
 cout<<"Enter the input string "<<endl;
 string s;
 getline(cin,s);
 reverse1(s);
 return 0;
}