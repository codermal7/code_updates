class Solution {
public:
    int numberOfArithmeticSlices(std::vector<int>& nums) {
        int n = nums.size();
        int total_count = 0;

        std::vector<std::unordered_map<int, int>> dp(n);

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                long long diff = static_cast<long long>(nums[i]) - nums[j]; 

                if (diff > INT_MAX || diff < INT_MIN)
                    continue; 

                int diff_int = static_cast<int>(diff);

                dp[i][diff_int] += 1; 

                if (dp[j].count(diff_int)) {
                    dp[i][diff_int] += dp[j][diff_int];
                    total_count += dp[j][diff_int];
                }
            }
        }

        return total_count;
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
