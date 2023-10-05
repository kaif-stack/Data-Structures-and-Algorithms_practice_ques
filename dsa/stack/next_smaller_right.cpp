#include <bits/stdc++.h>
using namespace std;

void print(vector <int> &v)
{
    for(auto i:v)
    cout<<i<<"  ";
    cout<<endl;
}

vector <long long int> prevSmaller(vector<int> &v, int &size)
    {
        stack <int> s;
        vector <long long int> result;
        for(int i = 0; i < size; i++)
        {
            if(!s.size())
            {
                result.push_back(-1);
            }
            else if( v[s.top()] < v[i])
            {
                result.push_back(s.top());
            }
            else {
                while(s.size() && v[s.top()] >= v[i])
                {
                    s.pop();
                }
                if(s.size()){
                    result.push_back(s.top());
                }
                else{
                    result.push_back(-1);
                }
            }
            s.push(i);
        }
        return result;
    }
    vector <long long int> nextSmaller(vector<int> &v, int &size)
    {
        stack <int> s;
        vector <long long int> result(size, -1);
        for(int i = size-1; i>=0; i--)
        {
            if(!s.size())
            {
                result[i] = -1;
            }
            else if(v[s.top()] < v[i])
            {
                result[i] = s.top();
            }
            else {
                while(s.size() && v[s.top()] >= v[i])
                {
                    s.pop();
                }
                if(s.size())
                {
                    result[i] = s.top();
                }
                else {
                    result[i] = -1;
                }
            }
            s.push(i);
        }
        return result;
    }

    long long maximumSumOfHeights(vector<int>& maxHeights) {
        int size = maxHeights.size();
        vector <long long int> prev = prevSmaller(maxHeights, size);
        vector <long long int> next = nextSmaller(maxHeights, size);
                
        vector <long long int> presum(size,0);
        presum[0] = maxHeights[0];
        for (int i = 1; i < size; i++)
        {
            if(prev[i] == -1)
            {
                presum[i] = (i+1)*maxHeights[i];
            }
            else{
                presum[i] = presum[prev[i]] + ((i-prev[i])*maxHeights[i]);
            }
        }
        
        
        vector <long long int> nextsum(size,0);
        nextsum[size-1] = maxHeights[size-1];
        for (int i = size-2; i >= 0; i--)
        {
            if(next[i] == -1)
            {
                nextsum[i] = (size-i)*maxHeights[i];
            }
            else{
                nextsum[i] = nextsum[next[i]] + ((next[i]-i)*maxHeights[i]);
            }
        }
        long long int ans = 0;

        for(int i = 0; i<size; i++)
        {
            if(presum[i] + nextsum[i] - maxHeights[i] > ans) ans  = presum[i] + nextsum[i] - maxHeights[i];
        }
        return ans;        
    }

    int main()

{
    vector <int> v = {1000000000,1000000000, 1000000000};
    int size  = v.size();
    long long int ans = maximumSumOfHeights(v);
    cout<<ans;

}
// int main ()         //right wala
// {
//     vector <int> v={1,3,2,4};
//     stack <int> s;
//     vector <int> v2;

//     int s1=v.size(), s2=v2.size();

//     for (int i = 0; i < s1; i++)
//     {
//         if(s.size()!=0 && s.top()<v[i])
//         {
//             v2.push_back(s.top());
//         }
//         else
//         {
//             while(s.size()!=0 && s.top()>v[i])
//             {
//                 s.pop();
//             }
//             if(s.size()==0)
//             {
//                 v2.push_back(-1);
//             }
//             else{
//                 v2.push_back(s.top());
//             }
//         }
//         s.push(v[i]);
//     }
//     for (int i = 0; i < s1; i++)
//     {
//         cout<<v2[i]<<" ";
//     }
    
// }