#include<bits/stdc++.h>

using namespace std;
int main(){
    string Name,Dept,Classno;
    cout<<"Enter Name,Dept,Classno :"<<endl;
 //   cin>>Name>>Dept>>Classno;
    getline(cin,Name);
    getline(cin,Dept);
    getline(cin,Classno);
// getline() is used to read an entire line of input, including spaces.
// Unlike cin, which stops reading at the first whitespace character.
    cout<<"Output details"<<endl;
    cout<<Name<<"\n"<<Dept<<"\n"<<Classno<<"\n";
    
   return 0;
}