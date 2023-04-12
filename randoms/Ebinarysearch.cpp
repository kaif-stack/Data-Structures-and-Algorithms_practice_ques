#include <bits/stdc++.h>
using namespace std;

int binarysearch ( int array[], int n, int b )
{
    int start=0;
    int end=n;
    while (start<end)
    {
        int mid=((start+end)/2);
        if(array[mid]==b)
        {
            return mid;
        }
        else if(array[mid]>b)
        {
            end=mid-1;
        }
        else if(array[mid]<b)
        {
            start=mid+1;
        }
    }
    return -1;
}

int main(void)
{   int n, a, b;  
    int arr[n];
    cout<<"Enter the length of array: ";
    cin>>n;
    for(a=0; a<n; a++)
    {
        cout<<"Enter element number "<<a+1<<": ";
        cin>>arr[a];
    }
    cout<<"Enter the niumber to be searched for: ";
    int result = binarysearch ( arr, n, b );
    if(result==-1)
    {
        cout<<"The element is not present in the array.";
    }
    else{
        cout<<"The element is present in the array aat the index "<<result<<".";
    }
}