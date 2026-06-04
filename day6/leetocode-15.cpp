
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> roman;
        roman.insert({'I',1});
        roman.insert({'V',5});
        roman.insert({'X',10});
        roman.insert({'L',50});
        roman.insert({'C',100});
        roman.insert({'D',500});
        roman.insert({'M',1000});
        int count=0;
        
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(roman[s[i]]<roman[s[i+1]]){
                ans-=roman[s[i]];
            }else{
                ans+=roman[s[i]];
            }
        }
  return ans;  }
};

/*
class Solution {

private:
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }



public:
    int romanToInt(string s) {
        int total = 0;
        int prevValue = 0;
        
        for (int i = s.length() - 1; i >= 0; --i) {
            int currentValue = getValue(s[i]);
            
            if (currentValue < prevValue) {
                total -= currentValue;
            } 
            else {
                total += currentValue;
                prevValue = currentValue;
            }
        }
        
        return total;
        
    }
};
*/