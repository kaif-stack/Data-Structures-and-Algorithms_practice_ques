#include <bits/stdc++.h>
using namespace std;

set <vector<int>> res;
        void rec(vector<int>& candidates,vector<int>selected, int index, int sum)
        {
            if(sum < 0)return;
            if(sum == 0)
            {
                sort(selected.begin(), selected.end());
                res.insert(selected);
                return;
            }
            if(index == candidates.size())return;
            rec(candidates, selected, index+1, sum);
            selected.push_back(candidates[index]);
            rec(candidates, selected, index+1, sum-candidates[index]);
        }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>selected;
            rec(candidates, selected, 0, target);
            vector<vector<int>> v;
            for(auto x: res)
            {
                v.emplace_back(x);
            }
        return v;

    }

    int main()
    {
        vector<int> v = {3,5};
        int target = 8;
        vector<vector<int>> v2;
        v2=combinationSum2(v,target);
        for (int i = 0; i < res.size(); i++)
        {
            for (int j = 0; j < v2[i].size(); j++)
            {
                cout<<v2[i][j]<<" ";
            }
            cout<<endl;
            
        }
    }