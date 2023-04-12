class Solution{
public:
    int rec(int N, int W,int val[], int wt[],vector<vector<int>> &dp ){
        if(N==0 ||W==0) return dp[N][W]=0;
        else if(dp[N][W]!=-1) return dp[N][W];
        else{
            if(wt[N-1]<=W){
                return dp[N][W]=max(val[N-1] + rec(N,W-wt[N-1],val,wt,dp),rec(N-1,W,val,wt,dp));
            }else{
                return dp[N][W]=rec(N-1,W,val,wt,dp);
            }
        }
    }

    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>> dp(1001,vector<int>(1001,-1));
        return rec(N,W,val,wt,dp);
    }
};
