#include <bits/stdc++.h>
using namespace std;

   int totalFruit(vector<int>& fruits) {
        
        if(fruits.size()<3)
        {
            return fruits.size();
        }
        int a = fruits[0], b = fruits[0];
        int lasta = 0, lastb = 1;
        for (int i = 0; i < fruits.size(); i++)
        {
            if(fruits[i]!=a)
            {
                b = fruits[i];
                lastb = i;
                break;
            }
        }

        int max = INT_MIN;
        int left = 0;
        int size = fruits.size();

        for (int i = 0; i < size; i++)
        {
            if(fruits[i]==a)
            {
                lasta = i;
            }
            else if(fruits[i] == b)
            {
                lastb = i;
            }
            else
            {
                if(fruits[i-1]==a)
                {
                    left = lastb+1;
                    b = fruits[i];
                    lastb = i; 
                }
                else
                {
                    left = lasta+1;
                    a = fruits[i];
                    lasta = i;
                }
            }
            if(max<(i-left))max = i-left;
        }
        return max+1;
    }


int main()
{
    vector <int> v = {1,1,4,0,4};
    cout<<totalFruit(v);
    cout<<"";
}
