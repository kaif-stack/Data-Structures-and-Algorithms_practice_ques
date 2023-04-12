#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int array[(2*n)-1][(2*n)-1];
    array[n-1][n-1]=1;
    int full=(2*n)-1;
    int mid=n-1;
    int m=2;
    for(int i=1; i<n; i++, m++)
    {
        for(int j=0; j<full; j++)
        {
            array[mid+i][j]=m;
            array[mid-i][j]=m;
            array[j][mid+i]=m;
            array[j][mid-i]=m;
        }
    }
    for(int k=0; k<full; k++)
    {
        for(int l=0; l<full; l++)
        {
            cout<<" "<<array[k][l];
        }
        cout<<endl;
    }

}