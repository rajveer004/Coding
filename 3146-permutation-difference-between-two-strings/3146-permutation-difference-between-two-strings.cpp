class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int sum = 0;
      for(int i=0;i<s.length();i++){
        char ch = s[i];
        for(int j=0;j<t.length();j++){
            if(t[j]==ch){
                sum = sum + abs(i-j);
                break;
            }
        }
      } 
      return sum; 
    }
};