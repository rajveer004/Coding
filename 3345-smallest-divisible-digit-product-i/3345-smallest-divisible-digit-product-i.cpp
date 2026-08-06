class Solution {
public:
    int smallestNumber(int n, int t) {
        int num =n;
        int prevnum =num;
        int product =1;
        while(product%t!=0){
            product=1;
            prevnum =num;
        while(num>0){
            product *=num%10;
            num=num/10;
        }
        num=prevnum+1;
        }
       return prevnum;
    }
};