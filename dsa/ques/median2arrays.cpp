#include <bits/stdc++.h>
using namespace std;


    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        float total = nums1.size()+nums2.size();
        float sum = 0;
        for(int i = 0 ; i< nums1.size(); i++)
        {
            sum+=nums1[i];
        }
        for(int i = 0 ; i< nums2.size(); i++)
        {
            sum+=nums2[i];
        }
        return sum/total;
    }

int main()
{
    vector <int> v1 = {1,3};
    
}