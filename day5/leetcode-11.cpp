class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size() - 1;
        int maxvol = 0;
        while (start < end) {
            int curbreadth = end - start;
            int curheight = min(height[start], height[end]);
            int vol = curbreadth * curheight;
            maxvol = max(vol, maxvol);
            if(height[start]> height[end]){
                end--;
            }else{
                start++;
            }
        }
  return maxvol;  }
};