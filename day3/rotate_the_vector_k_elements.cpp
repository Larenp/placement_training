#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,9,10};
    int k=2;
    for(int i=0;i<v.size();i+=k){
        reverse(v.begin(),v.begin()+i);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}
