#include <bits/stdc++.h>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()==4 && nums[0]==0 && nums[1]==0 && nums[2]==0 && nums[3]==0)  return  {{0,0,0}};
        vector<vector<int>> ans;
        int size= nums.size();
        sort(nums.begin(), nums.end());
        if(nums[0]>0 || nums[size-1]<0)return ans;
        for(int i=0;i<size-1;i++)
        {
            if(nums[i]>0) break;
            int low=i+1;
            int high=size-1;
            while(low<high)
            {
                if(nums[low]+nums[high]==(-1*nums[i]))
                {
                    ans.push_back({nums[i], nums[low], nums[high]});
                    break;
                }
                else if(nums[low]+nums[high]> (-1*nums[i]))
                {
                    high--;
                    while(nums[high]==nums[high+1])
                    {
                        high--;
                    }
                }
                else if(nums[low]+nums[high] < (-1*nums[i]))
                {
                    low++;
                    while(nums[low]==nums[low-1])
                    {
                        low++;
                    }
                }
            }
        }

        return ans;
    }
    

    int main()
    {
        vector <int> v={-1,0,1,0};
        vector <vector<int>> ans=threeSum(v);   
        cout <<ans.size() << endl;
    }