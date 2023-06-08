#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;
        int size;
        void rec(vector<int>& candidates,vector<int>selected, int index, int sum)
        {
            if(sum == 0)
            {
                res.push_back(selected);
                return;
            }
            if(sum < 0)return;
            if(index == candidates.size())return;
          
            rec(candidates, selected, index+1, sum);
            selected.push_back(candidates[index]);
            rec(candidates, selected, index+1, sum-candidates[index]);
            rec(candidates, selected, index, sum-candidates[index]);
        }

        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<int>selected;
            rec(candidates, selected, 0, target);
            return res;
        }

    int main()
    {
        vector<int> v = {2,3,6,7};
        int target = 7;
        combinationSum(v,target);
        for (int i = 0; i < res.size(); i++)
        {
            for (int j = 0; j < res[i].size(); j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
            
        }
    }