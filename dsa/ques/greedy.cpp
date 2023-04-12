#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
        int size = num.size();
        for(int i =0; i < size; i++)
        {
            if(k==0)break;
            if(num[i]>num[i+1])
            {
                num.erase(i,1);
                k--;
                i-=2;
                if(i<-2)i=0;
            }
        }
        if(k>0)
        num.erase(num.size()-k);
        while(1)
        {
            if(num[0]=='0')num.erase(0,1);
            else break;
        }
        if(num.size()==0)return "0";
        return num;
    }

    int main()
    {
        cout<<removeKdigits("1234567890", 9);
    }