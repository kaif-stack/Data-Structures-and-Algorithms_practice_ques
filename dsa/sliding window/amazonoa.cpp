#include <bits/stdc++.h>
using namespace std;


long findMinimumPrice(vector<int>& price) {
    int n = price.size();
    unordered_map<int, int> frequency; 
    int left = 0; 
    int a ,b;
    int minSubarraySum = INT_MAX; 
    int ans = INT_MAX;
    bool foundRepeated = false; 

    for (int right = 0; right < n; ++right) {
        frequency[price[right]]++; 

        if (frequency[price[right]] > 1) {
            foundRepeated = true;
        }

        while (foundRepeated && left <= right) {
            minSubarraySum = std::min(minSubarraySum, right - left + 1);
            frequency[price[left]]--; 
            if (frequency[price[left]] == 1) {
                foundRepeated = false; 
                int temp = 0;
                for(int i = left; i < right; i++)
                {
                    temp +=price[i];
                }
                temp+=price[right];
                if(temp<ans)
                {
                    ans = temp;
                }
            }
            left++; 

        }
    }

    return ans  == INT_MAX ? -1 :ans ;
}

int main() {
    std::vector<int> price = {8,7,3,5,7,3,1,4,7,8};
    int result = findMinimumPrice(price);
    std::cout << "Minimum subarray sum with at least one repeated element: " << result << std::endl;
    return 0;
}
