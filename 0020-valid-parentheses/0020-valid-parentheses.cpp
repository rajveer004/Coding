class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()) {
                if(s[i]=='(' || s[i] == '{'|| s[i]=='['){
                st.push(s[i]);
                }else{
                    return false;
                }
            }else{
                char top = st.top();
                if((top=='(' && s[i]==')') ||(top=='{' && s[i]=='}')||(top=='[' && s[i]==']') )st.pop();
                else if(s[i]=='('||s[i]=='{'||s[i]=='[')st.push(s[i]);
                else return false;
            }
        }
        if(st.empty())return true;
        return false;
    }

};