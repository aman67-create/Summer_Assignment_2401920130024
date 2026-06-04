class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size() == 1)
        return false;
       unordered_map<int,int> m;
       for(auto i : nums){
       m[i]++;
       if(m[i] != 1)
       return true;
       }
       return false;
    }
};
