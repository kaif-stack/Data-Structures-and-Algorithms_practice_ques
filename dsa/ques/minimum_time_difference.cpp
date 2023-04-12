#include <bits/stdc++.h>
using namespace std;

    int findMinDifference(vector<string>& timePoints) {
        
        vector <int> v;
        int time;
        int size = timePoints.size();
        bool flag = false;

        if(size<2)return 0;

        for (int i = 0; i < size; i++)
        {
            time = (((timePoints[i][0]-48)*10)+(timePoints[i][1]-48))*60 + ((timePoints[i][3]-48)*10)+(timePoints[i][4]-48);
            if(time == 0)
            {v.push_back(1440);
             flag = true;}
            v.push_back(time);
        }
        time = INT_MAX;
        size = v.size();
        sort(v.begin(), v.end());
        for (int i = 0; i < size-1; i++)
        {
            if((v[i+1]-v[i])<time)
            {
                time = v[i+1]-v[i];
            }
        }
        if((1440-v[size-1])+v[0]<time  && !flag) time = ((1440-v[size-1])+v[0]);
        return time;
    }

    int main()
    {
        vector<string> v = {"05:31","22:08","00:35"};
        cout<<findMinDifference(v);
    }