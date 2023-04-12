#include <bits/stdc++.h>
using namespace std;

bool check(char c)
{
    if(c == 'a' || c == 'e' ||c == 'i' ||c == 'o' ||c == 'u')return true;
    return false;
}

vector <int> func(vector <string> strArr, vector <string> qArr)
{
    int size = strArr.size();
    int A[size];
    int preprocessed[size];
    int prevall = 0;
    vector <int> ans;

    for(int i = 0; i < size; i++)
    {
        if(check(strArr[i][0]) && check(strArr[i][(strArr[i].length())-1]))
        {
            prevall++;
            A[i]=1;
            preprocessed[i] = prevall;
        }
        else
        {
            A[i] = 0;
            preprocessed[i] = prevall;
        }
    }
    
    int qsize = qArr.size();
    for(int i = 0; i < qsize; i++)
    {
        int minusindex = 0;
        for (int j = 0; j < qsize; j++)
        {
            if(qArr[i][j] == '-')
            {
                minusindex = j;
                break;
            }
        }
        int l = stoi(qArr[i].substr(0, minusindex));
        int r = stoi(qArr[i].substr(minusindex+1));

        ans.push_back(preprocessed[r]-preprocessed[l]+A[l]);
        
    }
    return ans;
}

int main()
{
    vector <string> qArr = {"2-3", "4-5"};
    vector <string> strArr = {"aab", "a", "bcd", "awe", "bbbbu"};
    vector <int> ans;
    ans =  func(strArr, qArr);
    cout<<ans[0]<<ans[1];
}

