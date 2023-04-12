#include <bits/stdc++.h>
using namespace std;


vector <int> minleft(vector <int> &v)
{
    stack <pair <int, int>> s;
    vector <int> v2;

    int s1=v.size(), s2=v2.size();

    for (int i = 0; i < s1; i++)
    {
        if(s.size()!=0 && s.top().first<v[i])
        {
            v2.push_back(i-s.top().second-1);
        }
        else
        {
            while(s.size()!=0 && s.top().first>=v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v2.push_back(i);
            }
            else v2.push_back(i-s.top().second-1);
        }
        s.push({v[i],i});

    }
    return v2;
}

vector <int> minright(vector <int> &v)
{
    stack <pair <int, int>> s;
    vector <int> v2;

    int s1=v.size(), s2=v2.size();

    for (int i = s1-1; i >=0; i--)
    {

        if(s.size()!=0 && s.top().first<v[i])
        {
            v2.push_back(s.top().second-i-1);
        }
        else
        {
            while(s.size()!=0 && s.top().first>=v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v2.push_back(s1-1-i);
            }
            else v2.push_back(s.top().second-i-1);
        }
        s.push({v[i],i});

    }
    return v2;
}
    
    int largestRectangleArea(vector<int>& v) {
        
        
        
        
    vector <int> left;
    vector <int> right;

    left = minleft(v);
    right = minright(v);

    int size=v.size();
    long long int max=0;

    for (int i = 0; i < size; i++)
    {
        long long int m= (v[i]*(left[i]+right[size-i-1]+1));
        if(max<m)
        {
            max=m;
        }
    }
    return max; 
        
    }

    int maximalRectangle(vector<vector<int>>& matrix)
    {
        int length=matrix[0].size();
        vector <int> arr (length, 0);
        int height=matrix.size();
        long long int max=0;
        for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if(matrix[i][j]==1)
                {
                    arr[j]++;
                }
                else
                {
                    arr[j]=0;
                }
            }

            int a=largestRectangleArea(arr);
            if(a>max)
            {
                max=a;
            }
            
        }
        return max;
        

    }




int main()
{
    vector <vector <char>> v={{0,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,0,0}};
    vector <vector <char>> v2={{1,0,1,0,0}, {1,0,1,1,1}, {1,1,1,1,1}, {1,0,0,1,0}};
    cout<<maximalRectangle(v);
}