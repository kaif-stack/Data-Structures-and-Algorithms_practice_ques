#include <bits/stdc++.h>
using namespace std;

int kConcatenationMaxSum(vector<int>& arr, int k) {
        int size = arr.size();
        int arr2[size*2];
        long long sum = 0;
        for(int i = 0; i < size; i++)
        {
                sum+=arr[i];
        }
        if(sum>0)return k*sum;
        for(int i = 0; i < size; i++)
        {
            arr2[i]=arr[i];
            arr2[i+size]=arr[i];
        }
        sum = 0;
        long long maxsum = INT_MIN;
        for(int i = 0; i < size*2; i++)
        {
            sum+=arr2[i];
            if(sum>maxsum)
            {
                maxsum = sum;
            }
            if(sum<0)sum=0;
        }
        return maxsum;
    }

    int main()
    {
        vector<int> v = {-5,-2,0,0,3,9,-2,-5,4};
        cout<<kConcatenationMaxSum(v,5);
    }