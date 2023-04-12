#include <bits/stdc++.h>
using namespace std;

    vector<int> singleNumber(vector<int>& nums) {
        map <int, bool> m;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if(m.find(nums[i]) == m.end())
            {
                m[nums[i]]=true;
            }
            else
            {
                m.erase(nums[i]);
            }
        }
        vector <int> v;
        for (auto iit:m)
        {
            v.push_back(iit.first);
        }
        return v;
    }