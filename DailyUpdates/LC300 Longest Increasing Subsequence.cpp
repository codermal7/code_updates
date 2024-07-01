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
};
// Testing code for online compiler 2024-09-27T22:51:00
// Testing code for online compiler 2024-09-28T22:51:00
// Testing code for online compiler 2024-08-08T22:53:03
// Testing code for online compiler 2024-08-09T22:53:03
// Testing code for online compiler 2024-08-10T22:53:03
// Testing code for online compiler 2024-08-11T22:53:03
// Testing code for online compiler 2024-08-12T22:53:03
// Testing code for online compiler 2024-08-13T22:53:03
// Testing code for online compiler 2024-08-14T22:53:03
// Testing code for online compiler 2024-08-15T22:53:03
// Testing code for online compiler 2024-08-16T22:53:03
// Testing code for online compiler 2024-08-17T22:53:03
// Testing code for online compiler 2024-08-18T22:53:03
// Testing code for online compiler 2024-08-19T22:53:03
// Testing code for online compiler 2024-08-20T22:53:03
// Testing code for online compiler 2024-08-21T22:53:03
// Testing code for online compiler 2024-08-22T22:53:03
// Testing code for online compiler 2024-08-23T22:53:03
// Testing code for online compiler 2024-08-24T22:53:03
// Testing code for online compiler 2024-08-25T22:53:03
// Testing code for online compiler 2024-08-26T22:53:03
// Testing code for online compiler 2024-08-27T22:53:03
// Testing code for online compiler 2024-08-08T22:26:49
// Testing code for online compiler 2024-08-09T22:26:49
// Testing code for online compiler 2024-08-10T22:26:49
// Testing code for online compiler 2024-08-11T22:26:49
// Testing code for online compiler 2024-08-12T22:26:49
// Testing code for online compiler 2024-08-13T22:26:49
// Testing code for online compiler 2024-08-14T22:26:49
// Testing code for online compiler 2024-08-15T22:26:49
// Testing code for online compiler 2024-08-16T22:26:49
// Testing code for online compiler 2024-08-17T22:26:49
// Testing code for online compiler 2024-08-18T22:26:49
// Testing code for online compiler 2024-08-19T22:26:50
// Testing code for online compiler 2024-08-20T22:26:50
// Testing code for online compiler 2024-08-21T22:26:50
// Testing code for online compiler 2024-08-22T22:26:50
// Testing code for online compiler 2024-08-23T22:26:50
// Testing code for online compiler 2024-08-24T22:26:50
// Testing code for online compiler 2024-08-25T22:26:50
// Testing code for online compiler 2024-08-26T22:26:50
// Testing code for online compiler 2024-08-27T22:26:50
// Testing code for online compiler 
// Testing code for online compiler 2024-10-06T22:27:51
// Testing code for online compiler 2024-10-07T22:27:51
// Changed code 2
// Testing code for online compiler 2024-06-16T17:21:38
// Testing code for online compiler 2024-06-17T17:21:38
// Testing code for online compiler 2024-06-18T17:21:38
// Testing code for online compiler 2024-06-19T17:21:38
// Testing code for online compiler 2024-06-20T17:21:38
// Testing code for online compiler 2024-06-21T17:21:38
// Testing code for online compiler 2024-06-22T17:21:38
// Testing code for online compiler 2024-06-23T17:21:38
// Testing code for online compiler 2024-06-24T17:21:38
// Testing code for online compiler 2024-06-25T17:21:38
// Testing code for online compiler 2024-06-26T17:21:38
// Testing code for online compiler 2024-06-27T17:21:38
// Testing code for online compiler 2024-06-28T17:21:38
// Testing code for online compiler 2024-06-29T17:21:38
// Testing code for online compiler 2024-06-30T17:21:38
// Testing code for online compiler 2024-07-01T17:21:38
