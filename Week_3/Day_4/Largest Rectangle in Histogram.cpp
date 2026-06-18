class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        if (heights.empty()) return 0;
        if (heights.size() == 1) return heights[0];
        int n = heights.size();
        vector<int> width(n);
        vector<int> area(n);
        vector<int> left(n),right(n);
        stack<pair<int,int>> s;
        int pseudoindex = -1;
        for(int i = 0; i < n; i++){
            while(!s.empty() && s.top().first >= heights[i])
                s.pop();
            if(s.empty())
                left[i] = pseudoindex;
            else
                left[i] = s.top().second;
            s.push({heights[i], i});
        }
        while(!s.empty())
        s.pop(); 
        pseudoindex = n;
        for(int i = n - 1; i >= 0; i--){
            while(!s.empty() && s.top().first >= heights[i])
                s.pop();
            if(s.empty())
                right[i] = pseudoindex;
            else
                right[i] = s.top().second;

            s.push({heights[i], i});
        }
        int maxarea = 0;
        for(int i = 0; i < n; i++){
            width[i] = right[i] - left[i] - 1;
            maxarea = max(maxarea,width[i]*heights[i]);
        }
        return maxarea;
    }
};
