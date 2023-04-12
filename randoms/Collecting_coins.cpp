#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>
//https://codeforces.com/problemset/problem/1294/A
using namespace std;


int money( int max, int min, int mid, int n)
{ 
    int diff = (max - min)+(max-mid);
    if(diff>n)
    {
        return 0;
    }
    int rest = (n - diff);
    if(rest%3==0)
    {
        return 1;
    }
    else{return 0;}


}

int main (void)
{ int t;
cin>>t;
while(t--)
    { int a, b, c, n;
    cin>>a>>b>>c>>n; 
    int array[3] = {a,b,c};
        int h = 3;
        sort(array, array + h);

  int result = money ( array[2], array[1], array[0], n);
  if( result==1)
  {
      cout<<"YES"<<endl;
  }
  else{cout<<"NO"<<endl;}
    }
}