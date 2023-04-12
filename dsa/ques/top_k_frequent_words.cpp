#include <bits/stdc++.h>
using namespace std;

 int guess(int num)
 {
    int number = 6;
    if(num<number)return -1;
    if(num>number)return  1;
    if(num==number)return 0;
 }

    int guessNumber(int n) {
        bool last = false;
        if(guess(n)==0)return n;
        if(guess(n)==1)
        {
            last = true;
        }
        int change = n;
        bool check;

        while(1)
        {
            if(last)
            {
                n-=change;
                if(guess(n)==-1)
                {
                    last = false;
                    change/=2;
                }
                if(guess(n)==0)return n;
            }
            else
            {
                n+=change;
                if(guess(n)==1)
                {
                    last = true;
                    change/=2;
                }
                if(guess(n)==0)return n;
            }
        }
    }

    int main()
    {
        cout<<guessNumber(10);
    }