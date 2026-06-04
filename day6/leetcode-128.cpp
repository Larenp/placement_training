class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        int maxcount = 0;
        sort(nums.begin(), nums.end());
        if(nums.size==0){
            return 0;
        }
        for (int i = 0; i < nums.size()-1; i++) {
            if (nums[i+1] == nums[i] + 1) {
                count++;
            } else if (nums[i] == nums[i + 1]) {
                continue;
            } else {       
                count = 1;
            }
             maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};
/*
1 2 3 4  4. 100 200
1 2 3 4  5   6   7
n[i]+1==n[i+1]
2===2 c=1
3 ===3 c=2


0 0 1 2 3 4
0. 0
*/