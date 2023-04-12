#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int jumpsearch ( int array[], int length, int search)
{
    int m, now;
    now = sqrt(length);
    int prev=0;
    while(array[min(length, now)] < search)
    {   
        prev = now;
        now+= m;
        if(prev>length)
        {return -1;}
    }
    while(prev<=length)
    {
        if(array[prev]==search)
        {return prev;}
        prev++;
    }
    return -1;


    
}

int main()
{   int i, n, s;
    cout<<"Enter length of array: ";
    cin>>n;
    int rayray[n];
    for (i=0; i<n; i++)
    {
        cout<<"Enter element number: "<<i+1<<endl;
        cin>> rayray[i];
    }
    cout<<"THANKYOUU!! Now enter the element to be searched for: "<<endl;
    cin>>s;
    int result = jumpsearch(rayray, n, s);
    if(result==-1)
    {cout<<"SAD!! the element was not found in the array.";}
    else{cout<<"The element was found at the index: "<<result+1<<" by jump search.";}
}