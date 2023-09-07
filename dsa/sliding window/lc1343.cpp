using namespace std;
#include <bits/stdc++.h>



    int numOfSubarrays(vector<int>& arr, int k, int t) {
        int ans = 0;
        long long int sum = 0;
        for(int i=0; i<k;i++)
            sum+=arr[i];
        int start=0;
        while((start+k)<=arr.size())
        {
            if(t<=(sum/k))ans++;
            if((start+k)<arr.size())
            {
                sum-=arr[start];
            sum+=arr[start+k];
            start++;
            }
        }
        return ans;
    }

    int main(){

        vector <int> arr = {2,2,2,2,5,5,5,8};
        cout<<numOfSubarrays(arr,3,4);
    }