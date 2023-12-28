#include <bits/stdc++.h>
using namespace std; 


vector<vector<int>> fourSum(vector<int>& nums, int target) {
        map<int , vector<pair<int,int>>> m;
        int size = nums.size();
        for(int i=0; i<size; i++)
        {
            for(int j=i+1;j<size; j++)
            {
                m[nums[i]+nums[j]].push_back({i,j});
            }
        }
        set <vector<int>> s;
        for(auto it:m)
        {
            int find = target-it.first;
            if(m.find(find) != m.end())
            {
                for(int i=0; i<it.second.size(); i++)
                {
                    for(int j=0; j<m[find].size(); j++)
                    {
                        vector <int> temp = {it.second[i].first, it.second[i].second, m[find][j].first,m[find][j].second};
                        sort(temp.begin(), temp.end());
                        if(temp[0]!= temp[1] && temp[1]!= temp[2] && temp[2]!= temp[3])
                        {
                            temp[0] = nums[temp[0]];
                            temp[1] = nums[temp[1]];
                            temp[2] = nums[temp[2]];
                            temp[3] = nums[temp[3]];
                            s.insert(temp);
                        }
                    }
                }
            }
        }
        vector <vector<int>>ans;
        for(auto it:s)
        {
            ans.push_back(it);
        }
        return ans;
    }

    int main()
    {
        vector <int> v = {1,0,-1,0,-2,2};
        fourSum(v,0);
    }