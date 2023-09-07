using namespace std;
#include <bits/stdc++.h>

int maxConsecutiveAnswers(string s, int k) {
        int noot=0,nof=0;
        int len=0, maxlen=0;
        int slen = s.length();
        int left = 0, right = 0;
        while(nof <= k && right < slen)
        {
            if(s[right] == 'F')
            {
                if(nof == k)
                {
                    right--;
                    break;
                }
                nof++;
            }
            right++;
        }
        len = right-left+1;
        maxlen = max(maxlen,len);
        right++;
        while(right < slen)
        {
            if(s[right] == 'F')
            {
                if(nof == k)
                {
                    while(1)
                    {
                        if(s[left] == 'F')
                        {
                            left++;
                            break;
                        }
                        left++;
                    }
                }
                else
                {
                    nof++;
                }
            }
            len = right-left+1;
            maxlen = max(maxlen,len);
            right++;
        }
        return maxlen;
      }


int main()
{
    cout<<maxConsecutiveAnswers("TTFTTFTT", 1);
}