class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int start=0;
        int size =0;
        for(int end = 0; end < n; end++){
            for(int i = start; i< end; i++){
               if(s[end]==s[i]){
                start = i+1;
                break;
               } 
            }
            size = max(size,end-start+1);
        }
        return size;
    }
};