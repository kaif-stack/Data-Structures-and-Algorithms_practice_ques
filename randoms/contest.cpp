#include <bits/stdc++.h>
using namespace std;


    long long maxKelements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        priority_queue <int> s;
        long long int ans=0;
        int largestindex = nums.size()-1; 
        ans+=nums[largestindex];\
        float f = nums[largestindex];
        s.push(ceil(f / 3));
        largestindex--;
        while(k>0 && largestindex>=0)
        {
                if(s.top()<nums[largestindex])
                {
                     ans+=nums[largestindex];
                     f = nums[largestindex];
                     s.push(ceil(f / 3));
                     largestindex--;
                }
            
             else if(s.top()>nums[largestindex])
             {
                long long int element=s.top();
                ans+=element;
                s.pop();
                f = element;
                s.push(ceil(element / 3));
             }
            k--;
        }
        return ans;
    }

int main()
{
    vector <int> v = {756902131,995414896,95906472,149914376,387433380,848985151};
    maxKelements(v, 6);
}