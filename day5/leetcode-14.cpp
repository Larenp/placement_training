class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string res="";
       string start=strs[0];
        string end=strs[strs.size()-1];
        int n=0;
        if(start.length()>end.length()){
            n=end.length();
        }else{
            n=start.length();
        }
        for(int i=0;i<n;i++){
            if(start[i]==end[i]){
                res+=start[i];
            }else{
                break;
            }
        }

    return res;}
};