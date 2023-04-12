#include <bits/stdc++.h>
using namespace std;


vector <char> convert (stack <char> s)    
{
   stack <char> s2;
   int size = s.size();
   for (int i = 0; i < size; i++)
   {
        s2.push(s.top());
        s.pop();
   }
   vector <char> v;
   for (int i = 0; i < size; i++)
   {
        v.push_back(s2.top());
        s2.pop();
   }
   return v;
}

int main ()
{
    stack <char> a;
    a.push('a');
    a.push('b');
    a.push('c');
    vector <char> res = convert(a);
    cout<<"";
}