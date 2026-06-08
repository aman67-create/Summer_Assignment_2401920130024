class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length())
       return false;
       unordered_map<char,int> map1;
       for(char c :s)
           map1[c]++;
       for(char c :t)
           map1[c]--;
           for(auto &it : map1){
            if(it.second != 0)
            return false;
           } 
return true;
    }
};
