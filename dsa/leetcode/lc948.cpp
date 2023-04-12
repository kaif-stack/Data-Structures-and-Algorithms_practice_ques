#include <bits/stdc++.h>
using namespace std;

    int bagOfTokensScore(vector<int>& tokens, int power) {
        int size = tokens.size()-1;
        int start=0;
        int score = 0;
        int last = 0;
        
        while(start<=size) 
        {
            if(power>=tokens[start])
            {

                power=power-tokens[start];
                start++;
                score++;
                last=1;
            }
            else
            {
                if(score==0)return score;
                power=power+tokens[size];
                size--;
                score--; 
                last=0;
            }

        }
        if (last==0)return score+1;
        return score;
    }


    int main()
    {
        vector<int> v={100,200,300,400};
        cout<<bagOfTokensScore(v, 200);
    }