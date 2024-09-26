class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int ans = 1, n = size(nums);
        vector<int> dp(n, 1);
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < i; j++) 
                if(nums[i] > nums[j]) 
				    dp[i] = max(dp[i], dp[j] + 1), ans = max(ans, dp[i]);
        
        return ans;
    }
};// Automated comment added on 2024-09-22
// Automated comment added on 2024-09-23
// Automated comment added on 2024-09-24
// Automated comment added on 2024-09-25
// Automated comment added on 2024-09-22T22:47:21
// Automated comment added on 2024-09-23T22:47:21
// Automated comment added on 2024-09-24T22:47:21
// Automated comment added on 2024-09-25T22:47:21
// Automated comment added on 2024-09-26T22:47:21
