class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v(10001,-1);
        stack<int> s;

        for(int x : nums2){
           while(!s.empty() && x>s.top()){
            v[s.top()] = x;
            s.pop();
           }
           s.push(x);
        }

        vector<int> ans;
        for(int x : nums1){
            ans.push_back(v[x]);
        }
        return ans;
    }
};
