class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int maxLength = 0;
        unordered_set<char> charSet;

        while(j<n){
            if(charSet.find(s[j]) == charSet.end()){
                charSet.insert(s[j]);
                maxLength = max(maxLength,j-i+1);
                j++;
            }
            else{
                charSet.erase(s[i]);
                i++;
            }
        }

        return maxLength;
    }
};
