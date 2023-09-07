using namespace std;
#include <bits/stdc++.h>

int rec(vector<int> &v, int n, int sum, int mid)
{
    cout<<n<<" "<<sum<<" "<<endl;
    if(sum == mid)return 0;
    if(n == 0)return mid-sum;

    if(v[n] < (mid-sum))
    {
        int a =  rec(v, n-1, sum+v[n], mid);
        int b =  rec(v, n-1, sum, mid);
        if(a>b)a=b;
        return a;
    }
    else{
        return rec(v, n-1, sum, mid);
    }
}

int minimumDifference(vector<int> &v)
{
    int total = 0;
    for (int x : v)
        total += x;
    return rec(v, v.size()-1, 0, total / 2);
}

int main()
{
    vector<int> v = {2, 3, 5, 6, 10};
    cout << minimumDifference(v) << endl;
}