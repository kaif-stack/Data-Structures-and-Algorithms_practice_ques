

#include <bits/stdc++.h>
using namespace std;

// bool isPerfectSquare(long double x)
// {
//     if (x >= 0) {
 
//         long long sr = sqrt(x);
//         return (sr * sr == x);
//     }
//     return false;
// }

// int count3DivNums(long long L, long long R) 
// {   
//     long long int left,right;
//     if(L==R)
//     {
//         return 0;
//     }
//     for (int i = L; i < R; i++)
//     {
//         if(isPerfectSquare(i))
//         {
//             left=sqrt(i);
//             break;
//         }
//     }
//     for (int i = R; i > L; i--)
//     {
//         if(isPerfectSquare(i))
//         {
//             right=sqrt(i);
//             break;
//         }
//     }
//     return right-left;    
// }
// int main()
// {
//     int L,R;
//     cin>>L>>R;
//     cout<<count3DivNums(L,R); 
// }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,y;
        cin>>n>>x>>y;
        int arr[n];
        int max,index;
        int max2,index2;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]>max)
            {   
                max2=max;
                index2=index;
                max=arr[i];
                index=i;
            }
        }
        if(x<=y)
        {
            cout<<max/y<<endl;
            continue;
        }
        else
        {
            if(index2<index);
        }

    }
    return 0;
}