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
};// Changed code 0
// Testing code for online compiler 2024-10-09T14:44:50
// Testing code for online compiler 2024-10-10T14:44:50
// Testing code for online compiler 2024-10-11T14:44:50
// Testing code for online compiler 2024-10-12T14:44:50
// Testing code for online compiler 2024-10-13T14:44:50
// Testing code for online compiler 2024-10-14T14:44:50
// Testing code for online compiler 2024-10-15T14:44:50
// Testing code for online compiler 2024-10-16T14:44:50
// Testing code for online compiler 2024-10-17T14:44:50
// Testing code for online compiler 2024-10-09T14:45:34
// Testing code for online compiler 2024-10-10T14:45:34
// Testing code for online compiler 2024-10-11T14:45:34
// Testing code for online compiler 2024-10-12T14:45:34
// Testing code for online compiler 2024-10-13T14:45:34
// Testing code for online compiler 2024-10-14T14:45:34
// Testing code for online compiler 2024-10-15T14:45:34
// Testing code for online compiler 2024-10-09T14:46:14
// Testing code for online compiler 2024-10-10T14:46:14
// Testing code for online compiler 2024-10-11T14:46:14
// Testing code for online compiler 2024-10-12T14:46:14
// Testing code for online compiler 2024-10-13T14:46:14
// Testing code for online compiler 2024-10-14T14:46:14
// Testing code for online compiler 2024-10-15T14:46:14
// Testing code for online compiler 2024-10-09T15:43:39
// Testing code for online compiler 2024-10-10T15:43:39
// Testing code for online compiler 2024-10-11T15:43:39
// Testing code for online compiler 2024-10-12T15:43:39
