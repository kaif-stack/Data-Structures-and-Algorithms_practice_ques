#include <bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int target) {
        
        int start = 0;
        int end = nums.size()-1;
        if(nums.size() == 1)
        {
            if(target == nums[0])return 0;
            return -1;
        }
        
        while(start < end)
        {
            int mid = start + (end - start) / 2;

            if(nums[mid] == target) return mid;

            if(start == end-1)
            {
                if(target == nums[start])return start;
                if(target == nums[end])return end;
                return -1;
                
            }
            
            if(nums[start] <= nums[mid])
            {
                if(nums[start] <= target && nums[mid] => target)
                {
                    end=mid;
                }
                else start = mid;
            }
            else
            {
                if(nums[mid] <= target && nums[end] >= target)
                {
                    start = mid;
                }
                else end=mid;
            }
        }
        return -1;
    }

    int main()
    {
        vector<int> nums={1,3,5};
        cout<<search(nums,1)<<endl;
    }
    