class Solution {
public:
    int reverseBits(int n) {
        vector<int>res(32,0);
        int num =0;
        int i=0;
      while(n>0){
        int bit = n&1;
        n=n>>1;
        res[i]=bit;
        i++;
      }
    //   reverse(res.begin(),res.end());
      for(int i=31;i>=0;i--){
          num += pow(2,(31-i))*res[i];
      }
      return num;
    }
};