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

//Code// Optimised the code 3
// Added code 3
// Added code 3
// Added code 3
// Added code 3
// Added code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Changed code 3
// Made minor testing changes for different ide's and online coding profiles 3
// Automated comment added on 2024-09-22
// Automated comment added on 2024-09-23
// Automated comment added on 2024-09-24
// Automated comment added on 2024-09-25
// Automated comment added on 2024-09-26
// Automated comment added on 2024-09-27
// Automated comment added on 2024-09-28
// Automated comment added on 2024-09-22
// Automated comment added on 2024-09-23
// Automated comment added on 2024-09-24
// Automated comment added on 2024-09-25
