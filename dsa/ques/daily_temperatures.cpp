#include <bits/stdc++.h>
using namespace std;


    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>> s;
        int size = temperatures.size();
        vector <int> v(size,0);
        s.push({temperatures[size-1],size-1});
        for (int i = size-1; i >= 0; i--)
        {
            if(s.top().first>temperatures[i])
            {
                v[i] = s.top().second-i;
                s.push({temperatures[i],i});
            }
            else{
                while( s.size()>0 && s.top().first<=temperatures[i])
                {
                    s.pop();
                }
                if(s.size() == 0)
                {
                    s.push({temperatures[i],i});
                    continue;
                }
                else
                {
                    v[i] = s.top().second-i;
                    s.push({temperatures[i],i});
                }
            }
        }
        return v;
        
    }

    int main()
    {
        vector <int> v ={73,74,75,71,69,72,76,73};
        vector <int> ans = dailyTemperatures(v);
        cout <<"aaaaaaaaaaaaaaaaaaaaaaaaaaa";
    }