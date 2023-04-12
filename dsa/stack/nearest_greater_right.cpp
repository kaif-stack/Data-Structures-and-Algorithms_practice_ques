#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums2, vector<int>& v) {
        stack <int> s;
        map <int,int> a;
        int s1=v.size();
        for (int i = s1-1; i >=0; i--)
        {
            s.push(v[i]);
        }
        
        
        
            for (int i = s1-1; i >= 0; i--)
    {
        if(s.size()==0)
        {
            s.push(-1);
        }
        if(s.size()>0 && s.top()>v[i])
        {
            a[v[i]]=s.top();
        }
        else if(s.size()>0 && s.top()<v[i])
        {
            while(s.size()!=0 && s.top()<v[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                a[v[i]]=-1;
            }
            else
            {
                a[v[i]]=s.top();
            }
        }
        s.push(v[i]);

    }
    int s2=nums2.size();
        vector <int> ans;
    for (int i = 0; i < s2; i++)
    {
        ans.push_back(a[nums2[i]]);
    }
        return ans;
        
    }
}ob;

int main()
{
    vector <int> v1= {3,1,5,7,9,2,6};
    vector <int> v2={1,2,3,5,6,7,9,11};
    vector <int> v3;
    v3 = ob.nextGreaterElement(v1,v2);


}