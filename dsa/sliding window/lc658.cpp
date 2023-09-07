using namespace std;
#include <bits/stdc++.h>


    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int maxi = 0, maxj=k-1;
        int mintotal = INT_MAX;
        int total = 0;
        for(int i=0; i<k; i++)
        {
            total+=abs(arr[i]-x);
        }
        cout<<total;
        mintotal = min(total,mintotal);
        int i=1;
        int j=k;
        while(j<arr.size()-1)
        {
            total+=abs(arr[j]-x);
            total-=abs(arr[i]-x);
            if(total<mintotal)
            {
                mintotal = total;
                maxi = i;
                maxj = j;
            }
            i++;
            j++;
        }
        vector <int> ans;
        for(int l=maxi; l<=maxj; l++)
        {
            ans.push_back(arr[l]);
        }
        return ans;
    }

    int main()
    {
        vector <int> arr = {0,1,2,2,2,3,6,8,8,9};
        vector <int> ans = findClosestElements(arr, 5,9);
        cout<<ans[0];

    }