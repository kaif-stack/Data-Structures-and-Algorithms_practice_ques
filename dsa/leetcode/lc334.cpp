#include <bits/stdc++.h>
using namespace std;

    bool increasingTriplet(vector<int>& nums) {
        
        vector <int> v;
        int size = nums.size();
        int i=0;
        int left = INT_MAX, mid = INT_MAX;

        for (i = 0; i < size; i++)
        {
            if(nums[i]<left)
            {
                left = nums[i];
            }
            else if(nums[i]>left && nums[i]<mid)
            {
                mid = nums[i];
            }
            else if(nums[i]>mid)
            {
                return true;
            }
        }
        return false;
    }

    int main()
    {
        vector <int> v={2,3,0,4};
        cout<<increasingTriplet(v);
    }