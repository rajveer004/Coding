class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>v;
        for(int i=1;i<num;i++){
            if(num%i==0)v.push_back(i);
        }
        int sum=0;
        for(int x : v){
            sum+=x;
        }
        return (num==sum);
    }
};