class Solution {
public:

    int climbStairs(int n) {
        int arr[n+1];
         if(n==1) return 1;
         else if(n==2) return 2;
         else if(n>=3){
             
             arr[0]=0;
             arr[1]=1;
             arr[2]=2;
             for(int i=3; i<n+1; i++)
             {
                 arr[i]=arr[i-1]+arr[i-2];
             }
         }
         return arr[n];
        
    }
};
