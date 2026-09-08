class Solution {
public:
    int bulbSwitch(int n) {
        // if(n==0)return 0;
        // if(n==1)return 1;
        // vector<int>v(n,1);
        // for(int i=2;i<=n;i++){
        //     for(int j=i;j<=n;j+=i){
        //         if(v[j-1]==1)v[j-1]=0;
        //         else v[j-1]=1;
        //     }
        // }
        // int count=0;
        // for(int i=0;i<n;i++){
        //     if(v[i]==1)count++;
        // }
        // return count;
        int count=0;
        for(int i=1;i<=n;i++){
            int root = int(sqrt(i));
            if(root*root == i)count++;
        }
        return count;
    }
};