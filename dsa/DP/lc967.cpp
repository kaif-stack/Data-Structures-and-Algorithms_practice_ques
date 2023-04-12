#include <bits/stdc++.h>
using namespace std;
    vector <int> v;

    void insert(int prev, int n, int k, long long int number)
    {
        if (n==0) 
        {
            if(find(v.begin(),v.end(), number)==v.end())
            {
                v.push_back(number);
            }
            return;
        }
        if ((prev+k)<=9)
        {
            int t=(number*10) + k + prev;
            insert(prev+k, n-1, k, t);
        }
        if((prev-k)>=0)
        {
            int t=(number*10) - k + prev;
            insert(prev-k, n-1, k,t);
        }
    }

    vector<int> numsSameConsecDiff(int n, int k) {
        
        int last=9-k;
        for(int i=1; i<10; i++)
        {
            insert(i, n-1, k, i);
        }
        return v;

    }


int main()
{
    // int n, k;
    // cin>>n>>k;
    vector<int> num;
    num=numsSameConsecDiff(3, 7);
}