#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    int total=240;
    int t_left=240-k;
    int ques=0;

        for(int i=5; i<=t_left; i=i+5)
        {
            t_left=t_left-i;
            ques++;
        }
        if(ques>n)
        {
            cout<<n;
        }
        else{cout<<ques;}
}