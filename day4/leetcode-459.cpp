bool lc459(string s) {
    // Create a string containing two copies of s
    string doubled = s + s;

    // Remove the first and last characters
    // to avoid matching s at the boundaries
    string trimmed = doubled.substr(1, doubled.size() - 2);

    // Check whether the original string exists inside trimmed
    int pos = trimmed.find(s);

    return pos != -1;
}

/*
bool repeatedSubstringPattern(string s) {
        string sub="";
        int i=0;
        int n=s.length();

        while(i<n){
            sub+=s[i];
            if(sub.length()==n || n%sub.length()!=0){
                i++;
                continue;
            }
            string temp="";
            while(temp.length()!=s.length()){
                temp+=sub;
            }
            if(temp==s)
                return true;
            i++;
        }
        return false;
    }*/


 /*
 wrong ans check later;
 #include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>
using namespace std;
 bool substring_pattern(string s){
     string substr="";
    substr=s[0];
    for(int i=0;i<s.length();i++){
        for(int j=i+1;j<s.length();j++){
           if(s[i]!=s[j]){
            substr+=s[j];
            
            }else{
                break;
            }
        }
        }
        int sublen=substr.length();
        int len=s.length();

        int k=len/sublen;
        string res;
        for(int i=0;i<k*sublen;i++){
            res+=sublen;
        }
        if(res==s){
            return true;
        }
        return false;
    }
    int main(){
        string s="abab";
        cout<<"result"<<endl;
       cout<<substring_pattern(s);
        return 0;
    }
*/