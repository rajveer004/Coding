class Solution {   //using recrusion
public:
    void reverseString(vector<char>& s) {
        helper(s,0,s.size()-1);
    }
    void helper(vector<char>& s,int stIdx ,int lastIdx){
        if(stIdx >= lastIdx)return;
        helper(s,stIdx+1,lastIdx-1);
        swap(s[stIdx],s[lastIdx]);
    }
};