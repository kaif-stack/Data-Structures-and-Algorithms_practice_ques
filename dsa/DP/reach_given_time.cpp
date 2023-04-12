#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#define ll long long int

vector<vector<bool>> dp(1001,vector<bool>(1001,false));

// int rec(int n, int prev){
//     if(n==0) return 1;
//     else if(n<0) return 0;
//     int ways=0;
//     if(prev<=3){
//         ways+=rec(n-3,3);
//     }
//     if(prev<=5){
//         ways += rec(n - 5, 5);
//     }
//     if (prev <= 10)
//     {
//         ways += rec(n - 10, 10);
//     }
//     return ways;
// }


// int rec(vector<int> &arr, int sum,int n){
//     if(sum==0) return dp[sum][n]=1;
//     else if(sum>0 && n==0) return dp[sum][n]=0;
//     else if(dp[sum][n]!=-1) return dp[sum][n];
//     else{
//         if(arr[n-1]<=sum){
//             return dp[sum][n] = rec(arr, sum - arr[n - 1], n - 1) + rec(arr, sum, n - 1);
//         }else{
//             return dp[sum][n] = rec(arr, sum, n - 1);
//         }

//     }

// }

int main()
{
    //subset sum count
    vector<int> arr = {1,5,2};
    int sum = 5;
    int n = arr.size();
    for (int i = 0; i <=sum; i++)
    {
        for (int j = 0; j<=n; j++)
        {
            if(i==0) dp[i][j]=true;
            else if(j==0 && i>0) dp[i][j]=false;
            else{
                if(arr[j-1]<=i){
                    dp[i][j] = dp[i-arr[j-1]][j-1] || dp[i][j-1];
                }
                else{
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }

    }

    int tot=0;
    for (auto i : arr)
    {
        tot+=i;
    }

    int ans=INT_MAX;
    for (int i = 0; i <=tot/2; i++)
    {
        if(dp[i][n]){
            ans = min(tot-2*i,ans);
        }
    }
    cout<<ans;
    return 0;
}

//sum=10
//[1,3,3,3]
