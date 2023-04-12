#include <bits/stdc++.h>
using namespace std;

    vector<int> diffWaysToCompute(string input)
    {
        vector<int> ans;
        int size = strlen(input);
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
            ans.push_back(atoi(input));
        }
    }