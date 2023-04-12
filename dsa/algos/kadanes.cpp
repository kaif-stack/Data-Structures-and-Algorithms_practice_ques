#include<bits/stdc++.h>
using namespace std;

    int maxSubArray(vector<int>& nums) {

    long long int curr=0, max=nums[0];
    int size=nums.size();
    for (int i = 0; i < size; i++)
    {
        curr+=nums[i];
        if(curr>max) max=curr;
        if(curr<0)curr=0;
     }
        return max;
    }

int main()
{
    vector <int> arr={-2,-1};
    cout<<maxSubArray(arr)<<endl;
}