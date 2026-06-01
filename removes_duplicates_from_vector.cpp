
/*Given an int array nums sorted in non decending order, remove the 
dulplicates in place such that each element appears only once and return the new length.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,9,10,10,10};
   sort(v.begin(),v.end(),greater<int>());
    v.erase(unique(v.begin(),v.end()),v.end());

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
   cout<<endl;
   cout<<v.size();
}
