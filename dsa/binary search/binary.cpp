#include <bits/stdc++.h>
using namespace std;
#define ll long long;

    int search(vector<int>& nums, int target) {
        
        ll int size= nums.size();
        ll int l=0, r=size-1;

        while(l<=r)
        {
            int mid = l + (r - l) / 2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                l = mid + 1;
            }
            else if(nums[mid] > target)
            {
                r = mid - 1;
            }
        }
        return -1;
        
        
    }