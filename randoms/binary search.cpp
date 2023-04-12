#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int binarysearch( int array[], int length, int search)
{
   int start=0;
   int end= length;
   while(start<=end)
   {
       int mid=((start+end)/2);
       if(array[mid]<search)
       {
           start=mid+1;
    
       }
       else if(array[mid]==search)
       {
           return mid;
       }
       else
       {
           end=mid-1;
    
       }
   }
   return -1;
}

int main()
{   int i, n, s;
    cout<<"Enter length of array: ";
    cin>>n;
    int rayray[n-1];
    for (i=0; i<n; i++)
    {
        cout<<"Enter element number: "<<i+1<<endl;
        cin>> rayray[i];
    }
    cout<<"THANKYOUU!! Now enter the element to be searched for: "<<endl;
    cin>>s;
    int result = binarysearch(rayray, n-1, s);
    if(result==-1)
    {cout<<"SAD!! the element was not found in the array.";}
    else{cout<<"The element was found at the index: "<<result+1<<" by binary search.";}
}