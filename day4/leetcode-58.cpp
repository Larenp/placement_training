#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int find(string s){
    int count=0;
    reverse(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i] != ' '){
                count++;
        }else if(s[i]==' '){
            return count;
            break;
        }
            
        }
    }
int main(){
 cout<<"Enter the input string "<<endl;
 string s;
 getline(cin,s);
 cout<<find(s)<<endl;
 return 0;
}
/*
int solve(string s){
int count=0;
stringstream ss(s);
string word,res;
while(ss>>word){
res=word;
}
return res.length();
}
// stringstream is used to treat a string as an input stream,
// allowing extraction of words, numbers, and other data using >>.
*/
 
/*
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int len = 0;
        int wordcnt = 0;
        for(int i = n - 1 ; i >= 0 ; i--){
        if(isspace(s[i]) && wordcnt==0){
        continue;
        }else{
        wordcnt=1;}
        }
        if(isspace(s[i]) && wordcnt +=0){
        len++;
        }
}
        return len;
}
        
*/
