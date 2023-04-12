#include <bits/stdc++.h>
using namespace std;

void bubble(int arr[], int size)
{
    arr[2]=0;
}

int main()
{
    int arr[] = {7,4,9,3,6,8,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr, size);
    cout<<arr[2];
}