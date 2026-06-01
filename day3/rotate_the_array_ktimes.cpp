#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,9};
    int k=3;
    vector<int>res;
    for(int i=0;i<v.size();i++){
        res.push_back(v[i]);
    }
    for(int i=0;i<k;i++){
        res.push_back(v[i]);
    }
    for(int i=k;i<v.size()+k;i++){
        cout<<res[i]<< " ";
    }
return 0;
    
} 
