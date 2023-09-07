#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int k, vector<int>& nums) {
        int i=0, j=0;
        int res = INT_MAX;
        long long sum = nums[0];
        int size = nums.size();
        while(j< size && i<=j)
        {
            if(i == j-1)
            {
                if(sum < k)
                {
                    j++;
                    if(j<size)sum+=nums[j];
                    continue;
                }
                else if(sum >= k)
                {
                    if(res < (j-i))res = (j-i);
                    i++;
                    sum-=nums[i];
                    continue;
                }
            }
            if(sum < k)
            {
                j++;
                if(j<size)sum+=nums[j];
            }
            else if(sum >= k)
            {
                if(res < (j-i))res = (j-i);
                sum-=nums[i];
                i++;
            }

        }
        return sum;
    }


    int main()
    {
        vector <int> v = {2,3,1,2,4,3};
        cout<<minSubArrayLen( 7, v);
    }