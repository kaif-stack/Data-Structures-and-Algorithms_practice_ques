#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,h,m;
            cin>>n>>h>>m;
            int time= (h*60)+m;
            int alarm[n][2];
            int diff[n]={0};
            for (int i = 0; i < n; i++)
            {
                cin>>alarm[i][0]>>alarm[i][1];
                diff[i]=(alarm[i][0]*60)+alarm[i][1];
            }
            for (int i = 0; i < n; i++)
            {
                if(time<=diff[i])
                {diff[i]=diff[i]-time;}
                else
                {diff[i]=(24*60)+diff[i]-time;}
            }
            sort(diff,diff+n);
            cout<<diff[0]/60<<" "<<diff[0]%60<<endl;
        }}