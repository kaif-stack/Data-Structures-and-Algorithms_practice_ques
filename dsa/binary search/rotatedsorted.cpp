#include <bits/stdc++.h>
using namespace std;

    int findMin(vector<int> arr){
    int n = arr.size();
    int l = 0;
    int r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if (arr[mid]<arr[prev]  && arr[mid]<=arr[next])
        {
            ans=mid;
            break;
        }
        else if (arr[mid]>arr[r])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return arr[ans];
}



int main()
{
    vector <int> arr = {11,13,15,17};
    cout<<"enter";
    cout<<findMin(arr);
}