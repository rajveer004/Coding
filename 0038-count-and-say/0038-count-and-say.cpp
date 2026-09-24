class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return "1";
        string temp = countAndSay(n-1);
        int prev=0;
        int cur=0;
        int size = temp.length();
        string ans="";
        while(cur<size){
            while(cur<size && temp[prev]==temp[cur]){
                cur++;
            }
            ans += to_string(cur-prev);
            ans +=temp[prev];
            prev=cur;
          
        }
        return ans;
    }
};