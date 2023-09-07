#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        int l1 = nums1.size();
        int l2 = nums2.size();
        vector <vector<int>> ans;
        int i=0,j=0;
        int check1=true;
        while(ans.size()<k)
        {
            if(check1)
            {
                for(int m = 0; m <= j; m++)
                {
                    vector <int> v;
                    v.push_back(nums1[i]);
                    v.push_back(nums2[m]);
                    ans.push_back(v);
                    if(ans.size()==k)break;
                }
            }
            else{
                for(int m = 0; m <= i; m++)
                {
                    vector <int> v;
                    v.push_back(nums1[m]);
                    v.push_back(nums2[j]);
                    ans.push_back(v);
                    if(ans.size()==k)break;
                }
            }
            if(ans.size()==k)break;
            if(i+1<l1 && j+1<l2)
            {
                if(nums1[i+1]<=nums2[j+1])
                {i++;check1=true;}
                else{j++;check1=false;}
            }
            else if(i+1<l1)
            {
                i++;
                check1=true;
            }
            else if(j+1<l1)
            {
                j++;
                check1=false;
            }
        }
        return ans;

    }


    int main()
    {
        vector <int> nums1 = {1,1,2};
        vector <int> nums2 = {1,2,3};
        vector<vector<int>> ans = kSmallestPairs(nums1,nums2,2);
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }

    }