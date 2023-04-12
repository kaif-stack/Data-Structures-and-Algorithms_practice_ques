#include <bits/stdc++.h>
using namespace std;

int binary(vector <int> &v, int c)
{
    int s=0;
    int l=v.size();
    int mid=s+(s+l)/2;
    while(s<=l)
    {
        if(cows(v,n))
        {
            s=mid;  
        }
        else
        {
            l=mid-1;
        }
    }
}

int main()
{
    vector <int> v={1,2,3,4,5,6,7,8,9};
    int c=3;
    int min=binary(v, c);
}