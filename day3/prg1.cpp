/*given integer array of size n and variable k,k<=n 
find the maximum sum of a subarray of size k with time complexity O(n)*/
#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> nums={2,7,11,15,6,3}; 
    int k=3;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    int max_sum=sum;
    for(int i=k;i<nums.size();i++){
        sum+=nums[i]-nums[i-k];
        maxsum

}
