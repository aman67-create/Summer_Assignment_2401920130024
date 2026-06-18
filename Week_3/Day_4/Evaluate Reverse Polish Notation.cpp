class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int x1,x2;
        
       stack<int> s;
       string op;
       int n = tokens.size();

       for(int i = 0; i<n; i++){
        if(tokens[i] == "+"){
            x1 = s.top();
            s.pop();
            x2 = s.top();
            s.pop();
            s.push(x2 + x1);
        }
        else if(tokens[i] == "-"){
           x1 = s.top();
            s.pop();
            x2 = s.top();
            s.pop();
            
            s.push(x2 - x1);
        }
        else if(tokens[i] == "*"){
           x1 = s.top();
            s.pop();
            x2 = s.top();
            s.pop();
            
            s.push(x2 * x1);
        }
        else if(tokens[i] == "/"){
           x1 = s.top();
            s.pop();
            x2 = s.top();
            s.pop();
            
            s.push(x2 / x1);
        }
        else
        s.push(stoi(tokens[i]));
       }
       return s.top();
    }
};
