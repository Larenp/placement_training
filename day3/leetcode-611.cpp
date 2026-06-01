/*
given an integer array nums,return the number
 of triples chosen from the array that can make triagnles 
if we take them as side lengths of a triangle of triangle

*/
 #include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int main(){
    vector<int> nums={4,2,3,4};
    sort(nums.begin(),nums.end());
    int count=0;
    for(int i=nums.size()-1;i>=2;i--){
        int temp=nums[i];
        int r=i-1;
        int l=0;
        while(l<r){
            if(nums[l]+nums[r]>temp){
                count+=(r-l);
                r--;

            }else{
                l++;
            }
       
        }
 }
  cout<<count;  


}   