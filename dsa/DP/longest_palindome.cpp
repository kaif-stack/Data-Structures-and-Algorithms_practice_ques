#include <bits/stdc++.h>
using namespace std;


     string longestPalindrome(string s)
     {
        int size = s.length();
        if (size < 2)return s;
        if((size == 2) && (s[0]==s[1]))return s;

        vector<vector<int>> dp(size, vector<int>(size,-1));
        // int dp[5][5] = {0};
        for (int i = 0; i < size; i++)
        {
            dp[i][i]=1;
        }
        int max=0;
        int startindex = 0;
        for (int length = 1; length < size; length++)
        {
            int start = 0;
            bool flag = false;
            while(start+length < size)
            {
                if(length==1)
                {
                    if(s[start] == s[start+length])
                    {
                        dp[start][start+length]=1;
                        flag=true;  
                        startindex = start;
                    }
                }
                else{
                    if(s[start] == s[start+length] && dp[start+1][start+length-1]==1)
                    {
                        dp[start][start+length]=1;
                        flag=true;
                        startindex = start;
                    }
                }
                start++;
            }
            if(flag)
            {
                max = length;
            }
        }
        return s.substr(startindex, max+1);
     }


int main()
{
    cout<<longestPalindrome("babad");
}