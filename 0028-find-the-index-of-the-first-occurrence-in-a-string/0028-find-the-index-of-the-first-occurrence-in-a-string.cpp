class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int ans =-1;
        for(int i=0;i<=n-m;i++){
            int l=i;
            int l2 =0;
            while(l2<m){
                if(haystack[l]!=needle[l2]){
                break;
                }
                l++;
                l2++;
                if(l2 == m){return ans =i;}
            }
        }
        return ans;
    }
};