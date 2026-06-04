class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto c:nums){
            freq[c]++;
        }
        for(auto c:freq){
            if(c.second>nums.size()/2){
                return c.first;
            }
        }

   return -1; }
};
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(auto c:nums){
            freq[c]++;
        }
        int ans = nums[0];
        int mx = 0;

        for(auto p : freq){
            if(p.second > mx){
                mx = p.second;
                ans = p.first;
            }
        }

        return ans;
    }      
    }
};
*/
/*
int n=nums.size();
sort(nums.begin(),nums.end());
return nums[n/2];
*/