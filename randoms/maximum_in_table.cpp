#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

value(int x, int y)
{
    if(x==1 || y==1)
    {
        return 1;
    }
    else
    {
        return (value(x-1, y) + value(x, y-1));
    }

}

int main()
{   int x;
    cin>>x;
    cout<<value(x, x);
}