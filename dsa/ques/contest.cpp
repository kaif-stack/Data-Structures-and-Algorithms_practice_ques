#include <bits/stdc++.h>
using namespace std;


    int minimizeSum(vector<int>& nums) 
    {
        stack <int> s;
        int size = nums.size();
        if(size<4)return 0;
        long long int min = INT_MAX;
        vector <int> lastmin;
        int index1=-1, index2=-1;
        long long int max = INT_MIN;
        for (int i = 0; i < size; i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
                index1 = i;
            }
            if(max<nums[i]-min)
            {
                max = (nums[i]-min);
                index2 = i;
            }
            lastmin.push_back(nums[i]-min);
        }
        nums[index2] = nums[index1];
        index1 = -1;
        index2 = -1;
        min = INT_MAX;
        max = INT_MIN;
        lastmin.clear();
        for (int i = 0; i < size; i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
                index1 = i;
            }
            if(max<nums[i]-min)
            {
                max = (nums[i]-min);
                index2 = i;
            }
            lastmin.push_back(nums[i]-min);
        }
        nums[index2] = nums[index1];
        min = INT_MAX;
        max = INT_MIN;
        lastmin.clear();
        for (int i = 0; i < size; i++)
        {
            if(min>nums[i])
            {
                min = nums[i];
            }
            if(max<nums[i]-min)
            {
                max = (nums[i]-min);
            }
            lastmin.push_back(nums[i]-min);
        }
        return max;       
        
    }

    int main()
    {
        vector<int> v = {1,4,7,8,5};
        cout<<minimizeSum(v);
    }