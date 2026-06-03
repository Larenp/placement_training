int lc5(string s){
    unordered_set<char> set;
    int l=0;
    int maxL=0;
    for(int r=0;r<s.length();r++){
        while(set.count(s[r])){
            set.erase(s[l]);
            l++;
        }
        set.insert(s[r]);
        maxL=max(maxL,r-l+1);
    }
    return maxL;
}
int main(){
    string 
}
/*
int lc5(string s){
int right=0;
int cnt[128]=0;
int maxi=0;
int left =0;
for(right; right<s.size();right++){
    while(cnt[s[right]]>1){
    cnt[s[left]]--;
    left++;
    }
    maxi=max(maxi,right-left+1);
    }
    return maxi
}
*/

