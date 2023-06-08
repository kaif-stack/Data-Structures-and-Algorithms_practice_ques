#include <bits/stdc++.h>
using namespace std;

    vector <int> rec(vector <int> &v, int si, int ei)
    {
        if(si == ei)
        {
            return {v[si]};
        }
        vector <int> v3;
        for(int i = si; i < ei; i++)
        {
            vector <int> v1, v2;
            v1 = rec(v, si, i);
            v2 = rec(v, i+1, ei);
            for(int j = 0; j < v1.size(); j++)
            {
                for(int k = 0; k < v2.size(); k++)
                {
                    v3.push_back(v1[i]+v2[j]);
                }
            }
        }

        int x=0;
        for(int i = si; i <= ei; i++)
        {
            x*=10;
            x+=v[i];
        }
        v3.push_back(x);

        return v3;

    }

    bool check(int n)
    {
        int n2 = n*n;
        int n3 = n2;
        vector <int> v;
        while(n2>0)
        {
            v.insert(v.begin(),n2%10);
            n2/=10;
        }
        vector <int> v2;
        v2 = rec(v, 0, v.size()-1);
        for(int i = 0; i < v2.size(); i++)
        {
            if(v2[i] == n)return true;
        }
        return false;
    }

    int punishmentNumber(int n) {
        long long sum = 0;
        for(int i = 1; i <= n; i++)
        {
            if(check(i))
            {
                sum+=i*i;
            }
        }
        return sum;
    }

    int main()
    {
        cout<<punishmentNumber(10);
    }