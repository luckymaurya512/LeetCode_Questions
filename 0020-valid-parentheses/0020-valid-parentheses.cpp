class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(st.empty() && (s[i]==')' || s[i]=='}' || s[i]==']')) return false;
            else if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if(s[i]==')' && st.top() !='(') return false;
                else if(s[i]=='}' && st.top()!='{') return false;
                else if(s[i]==']' && st.top() != '[') return false;
                st.pop();
            }
            
        }
        if(st.empty()) return true;
        return false;
    }
};