#include <bits/stdc++.h>
using namespace std;

    int conv(string s)
    {
        int length = s.length();
        long long int ans=0;
        for (int i = 0; i < length; i++)
        {
            ans = ans+(s[i]-48);
            ans*=10;
        }
        return ans/10;
    }
    vector<int> diffWaysToCompute(string input)
    {
        vector<int> ans;
        int size = input.length();
        for (int i = 0; i < size; i++)
        {
            vector<int> result1;
            vector<int> result2;
            if(input[i] == '-' || input[i] == '+' || input[i] == '*')
            {
                result1 = diffWaysToCompute(input.substr(0, i));
                result2 = diffWaysToCompute(input.substr(i+1));
            }
            for(auto a: result1)
            {
                for (auto b: result2)
                {
                    if(input[i] == '+')ans.push_back(a+b);
                    if(input[i] == '-')ans.push_back(a-b);
                    if(input[i] == '*')ans.push_back(a*b);
                }    
            }
        }
        if(ans.size() == 0)
        {
            ans.push_back(conv(input));
        }
    }


int main()
{
    string s = "211";
    cout<<conv(s);
    cout<<"1";
}