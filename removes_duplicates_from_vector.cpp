
/*Given an int array nums sorted in non decending order, remove the 
dulplicates in place such that each element appears only once and return the new length.
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v={10,9,8,7,5,5,4,4,2,1,0};
  v.erase(unique(v.begin(),v.end()),v.end());

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }
}
