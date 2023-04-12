#include <bits/stdc++.h>
using namespace std;

int rec(vector <int> &vec1, vector <int> &memo, int index, int n)
{   
    if(index==0)
    {
        return 0;
    }
    if(memo[index]!=-1)
    {
        return memo[index];
    }
    else
    {
        long long int left, right;
        if(index>1)
        {
            left=rec(vec1,memo,index-2,n)+abs(vec(index)-vec(index-2));
        }
        right=rec(vec1,memo,index-1,n)+abs(vec(index)-vec(index-1));
        return min(left,right);
        
    }
}


int frogJump(int n, vector<int> &heights)
{
    int x;
    vector <int> memo(n,-1);
    
    return rec(heights, memo, n, n);

    
    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    }
}