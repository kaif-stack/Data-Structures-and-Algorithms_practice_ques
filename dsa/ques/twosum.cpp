  #include <bits/stdc++.h>
using namespace std;
  
   vector<int> twoSum(vector<int>& nums, int target) {
        int length=nums.size();
        vector <int> v={-1,-1};
        
        for(int i=0; i<length; i++)
        {
            int first=nums[i];
            for(int j=i+1; j<length; j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    v[0]=i;
                    v[1]=(j);
                    return v;
                    
                }
                if(nums[i]+nums[j]>target)
                {
                    break;
                }
            }
        }
        return v;
   }

   int main()
   {
    vector <int> v={-3, 4, 3, 90};
    int s=0;
    vector <int> ans;
    ans=twoSum(v,s);
    cout<<ans[0]<<" "<<ans[1]<<endl;
    
   }