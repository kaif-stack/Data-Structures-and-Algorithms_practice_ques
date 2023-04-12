#include <bits/stdc++.h>
using namespace std;

int bs(int start,int last,int arr[], int num)
{
    while(start<last)
    {   
        int mid=start+((last-start)/2);
        if(arr[mid]==num)
        {
            return mid;
        }
        if(arr[mid]<num)
        {
            start=mid+1;
        }
        if(arr[mid]>num)
        {
            last=mid-1;
        }
    }
}

// int fn(int start,int last,int arr[], int num)
// {   int r;
//     int mid=start+((last-start)/2);
//     {
//         if(arr[mid]<arr[mid-1] && arr[mid]<arr[mid+1])
//         {
//             r = mid;
//         }
//         if(arr[start]<arr[mid])
//         {
//             start=mid+1;
//         }
//         else if(arr[mid]<arr[last])
//         {
//             last=mid-1;
//         }
//     }
//     if(num>arr[start] && num<=arr[r-1])
//     {
//         return 1+binary(start, r, arr, num);
//     }
//     else
//     {
//         return 1+binary(r, last, arr, num);
//     }
// }

    int fe(vector<int> arr, int target){
    int n = arr.size();
    int l = 0;
    int r = n - 1;
    int ans = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid]==target)
        {
            ans=mid;
            break;
        }
        else if(arr[l]<arr[mid])
        {
            if(arr[l]<target || target<=arr[mid])
            {
                r=mid-1;
            }
            else{l=mid+1;}
        }
        else
        {
            if(arr[mid]<target || target<=arr[r])
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
    }
    return arr[ans];
}

int main()
{
    int arr[] = {10,30,30,50,100,2,4,6,8,10,10};
    int size=11;
    int start=0;
    int last=size;
    int num;
    cout<<"enter";
    cin>>num;
    int mid;
    cout<<fe(arr, num);
    cout<<endl;
}


class Solution {
public:
    int bs(vector<int> arr,int val,int start,int end,int res){
    // int start = 0;
    // int end = arr.size() - 1;
    // int res=-1;
    while (start <=end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] < val)
        {
            start=mid+1;
        }
        else if (arr[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            res=mid;
            break;
        }
    }
    return res;
}

    int search(vector<int>& arr, int target) {
        int start = 0;
        int end= arr.size()-1;
        int n = arr.size();
        // if(n==1 || n==2){
        //     for(int i=0; i<n;i++){
        //         if(arr[i]==target) return i;
        //     }
        //     return -1;
        // }
        if(arr[0]>arr[n-1]){
            int res=-1;
            while(start<=end){
                int mid = start+(end-start)/2;
                int prev = (mid+n-1)%n;
                int next = (mid+1)%n;
                if(arr[mid]<arr[next] && arr[mid]<arr[prev]){
                    res=mid;
                    break;
                }
                if(arr[mid]<=arr[end]){
                    end = mid-1;
                }
                else if(arr[mid]>=arr[start]){
                    start = mid+1;
                }
            }

            int b1=-1;
            int b2 = -1;
            if(target>=arr[0]){
                b1 =bs(arr,target,0,res-1,-1);
                return b1;
            }
            else{
                b2=bs(arr,target,res,n-1,-1);
                return b2;
            }
        }else{
            int alt=bs(arr,target,0,n-1,-1);
            return alt;
        }


    }
};