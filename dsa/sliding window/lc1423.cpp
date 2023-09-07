using namespace std;
#include <bits/stdc++.h>


    int maxScore(vector<int>& cardPoints, int k) {
        int start = 0;
        int window = cardPoints.size() - k;
        long long int sum = 0;
        for(int i = 0;i < window; i++)
            sum+=cardPoints[i];
        int minSum = sum;
        while((start+window) < cardPoints.size())
        {
            sum-=cardPoints[start];
            sum+=cardPoints[start+window];
            start++;
            if(minSum>sum)minSum=sum;
        }
        sum=0;
        for(int x:cardPoints)
           {
                sum+=cardPoints[x];
           }
           cout<<sum<<" ";
        return sum-minSum;
    }

    int main()
    {
        vector <int> v = {1,2,3,4,5,6,1};
        cout<<maxScore(v,3);
    }