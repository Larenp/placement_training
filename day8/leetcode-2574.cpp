class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> leftsum;
        vector<int> rightsum;
        vector<int> res;

        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            leftsum.push_back(ans);
            ans += nums[i];
        }

        ans = 0;

        for (int i = nums.size() - 1; i >= 0; i--) {
            rightsum.push_back(ans);
            ans += nums[i];
        }
        reverse(rightsum.begin(), rightsum.end());

        for (int i = 0; i < nums.size(); i++) {
            res.push_back(abs(leftsum[i] - rightsum[i]));
        }

        return res;
    }
};
