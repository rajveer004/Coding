class Solution {
public:
vector<string> ans;
    vector<string> letterCombinations(string digits) {
      vector<string>v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      
    if(digits.size()==0){
        vector<string>res;
        res.push_back("");
        return res;
    }

      int ch =digits[0]-'0';
      string next =digits.substr(1);
      vector<string> res = letterCombinations(next);

      vector<string>res1;
      for(char ele :v[ch]){
        for(string s :res){
         res1.push_back(ele+s);
        }
      }
      return res1;
    }
    
};