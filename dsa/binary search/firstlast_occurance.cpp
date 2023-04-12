#include <bits/stdc++.h>
using namespace std;


    int first(int start, int last, vector<int>&  arr, int num)
{
    int mid=start+((last-start)/2);
    while(start<=last)
    {
        mid=start+((last-start)/2);
        if(arr[mid]<num)
        {
            start=mid+1;
        }
        else if(arr[mid]>num)
        {
            last=mid-1;
        }
        else
        {
            if(arr[mid-1]==arr[mid])
            {
                last=mid-1;
            }
            else return mid;
        }
    }
        return -1;
}

int lasto(int start, int last, vector<int>&  arr, int num)
{
    int mid=start+((last-start)/2);
    while(start<=last)
    {
        mid=start+((last-start)/2);
        if(arr[mid]<num)
        {
            start=mid+1;
        }
        else if(arr[mid]>num)
        {
            last=mid-1;
        }
        else
        {
            if(arr[mid+1]==arr[mid])
            {
                start=mid+1;
            }
            else return mid;
        }
    }
            return -1;
}


    vector<int> searchRange(vector<int>& nums, int target) {

    long long int size=nums.size();
    int start=0;
    int last=size;
        // if(start==nums.size()||nums[start]!=target)return {-1,-1};
        // if(last<0 || nums[last]!=target)return {-1,-1};
            if(nums.size()==0)
        {
            return {-1,-1};
        }
        if(nums.size()==1 && nums[0]==target)
        {
            return {0,0};
        }
        else if (nums.size()==1 && nums[0]!=target)
        {
            return {-1,-1};
        }

    vector <int> ans={first(0, last, nums, target),lasto(0, last, nums, target)};

    return ans;
        
    }

int main()
{
    int n;
    cin>>n;
    vector <int> v;
    long long int x;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    long long int target;
    cin>>target;
    vector <int> ans;
    ans=searchRange(v,target);
    cout<<ans[0]<<" "<<ans[1];
    cout<<endl;
}


