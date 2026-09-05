class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>set;
        while(n!=1){
            if(set.count(n)){
                return false;
            }
            set.insert(n);
            int num=n;
            int sum=0;
            while(num>0){
                sum += (num%10)*(num%10);
                num = num/10;
            }
            n=sum;
        }
        return true;
    }
};