#include <bits/stdc++.h>
using namespace std;

    int firstBadVersion(int n) {

        int l=0;
        
        while (l<=n){
            int mid = l + (n - l) / 2;
            if(!isBadVersion(mid))
            {
                l=m; 
            }
            else if(isBadVersion(mid) && !isBadVersion(mid-1)
            {
                return mid;
            }
            else if(isBadVersion(mid) && isBadVersion(mid-1))
            {
                n=mid;
            }
        }
        
      
    } 