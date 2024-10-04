class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if (intervals.empty()) {
            return {newInterval};
        }
        int n = intervals.size();
        int target = newInterval[0];
        int left = 0, right = n - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (intervals[mid][0] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        intervals.insert(intervals.begin() + left, newInterval);
        vector<vector<int>> res;
        for (const auto& interval : intervals) {
            if (res.empty() || res.back()[1] < interval[0]) {
                res.push_back(interval);
            } else {
                res.back()[1] = max(res.back()[1], interval[1]);
            }
        }

        return res;
    }
};

//My Code// Optimised the code 0
// Added code 0
// Added code 0
// Added code 0
// Added code 0
// Added code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Changed code 0
// Made minor testing changes for different ide's and online coding profiles 0
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
