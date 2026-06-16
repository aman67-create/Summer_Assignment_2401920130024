class Solution {
public:

int stringLength(string s, int left, int right){
        while(left>=0 && right<s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return right - left - 1;
    }
    string longestPalindrome(string s) {
        if(s.empty())
        return "";

        int st = 0;
        int end = 0;

        for(int i=0;i<s.length();i++){
            int odd = stringLength(s,i,i);
            int even = stringLength(s,i,i+1);
            int max_len = max(odd,even);

            if(max_len > end-st){
                st = i - (max_len -1)/2;
                end = i + max_len/2;
            }
        }
        return s.substr(st,end-st+1);
    }
};
