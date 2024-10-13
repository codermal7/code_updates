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
};// Changed code 2
// Testing code for online compiler 2024-10-09T14:44:50
// Testing code for online compiler 2024-10-10T14:44:50
// Testing code for online compiler 2024-10-11T14:44:50
// Testing code for online compiler 2024-10-12T14:44:50
// Testing code for online compiler 2024-10-13T14:44:50
