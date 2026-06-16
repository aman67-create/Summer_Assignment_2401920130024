class Solution {
public:
    string helper(string &s){
        vector<int> count (26,0);

        for(char c : s)
        count[c - 'a']++;

        string ss = "";
        for(int i = 0; i<26; i++){
            ss += char('a' + i) + to_string(count[i]);
        }

        return ss;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        unordered_map<string, vector<string>> mp;
        
            for(auto &s : strs){
                mp[helper(s)].push_back(s);
            }

            for(auto &it : mp)
            v.push_back(it.second);

            return v;
    }
};
