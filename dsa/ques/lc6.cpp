#include <bits/stdc++.h>
using namespace std;

string convert(string s, int numRows)
{
    if(numRows < 2 || s.length()<3)return s;
    
    string arr[numRows] = {""};
    int dir = 1;
    int size = s.length();
    int index = 0;
    int level = 0;
    while(index < size)
    {
        arr[level].append(s.begin()+index,s.begin()+index+1);
        level+=dir;
        index++;
        
        if(level == 0)dir = 1;
        if(level == numRows-1)dir = -1;

    }
    string ans = "";
    for (int i = 0; i < numRows; i++)
    {
        ans.append(arr[i]);
    }
    return ans;
}

int main()
{
    cout<<convert("PAYPALISHIRING", 3);
    cout<<"a";
}