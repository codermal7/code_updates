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
// Changed code 0
// Testing code for online compiler 2024-10-18T19:08:22
// Testing code for online compiler 2024-10-19T19:08:22
// Testing code for online compiler 2024-10-20T19:08:22
// Testing code for online compiler 2024-10-18T19:08:45
// Testing code for online compiler 2024-10-19T19:08:45
// Testing code for online compiler 2024-10-20T19:08:45
// Testing code for online compiler 2024-10-21T19:08:45
// Testing code for online compiler 2024-10-18T23:41:35
// Testing code for online compiler 2024-10-19T23:41:35
// Testing code for online compiler 2024-10-20T23:41:35
// Testing code for online compiler 2024-10-21T23:41:35
// Testing code for online compiler 2024-10-22T23:41:35
// Testing code for online compiler 2024-10-22T14:16:16
// Testing code for online compiler 2024-10-23T14:16:16
// Testing code for online compiler 2024-10-24T14:16:16
// Testing code for online compiler 2024-10-25T14:16:16
// Testing code for online compiler 2024-10-26T14:16:16
// Testing code for online compiler 2024-10-27T14:16:16
// Testing code for online compiler 2024-10-29T01:07:09
// Testing code for online compiler 2024-10-30T01:07:09
// Testing code for online compiler 2024-10-31T01:07:09
// Testing code for online compiler 2024-11-01T01:07:09
// Testing code for online compiler 2024-11-02T01:07:09
// Testing code for online compiler 2024-11-03T01:07:09
// Testing code for online compiler 2024-11-04T01:07:09
// Testing code for online compiler 2024-11-05T01:07:09
// Testing code for online compiler 2024-11-06T01:07:09
// Testing code for online compiler 2023-07-01T23:15:33
// Testing code for online compiler 2023-07-02T23:15:33
// Testing code for online compiler 2023-07-03T23:15:33
// Testing code for online compiler 2023-07-04T23:15:33
// Testing code for online compiler 2023-07-05T23:15:33
// Testing code for online compiler 2023-07-06T23:15:33
// Testing code for online compiler 2023-07-07T23:15:33
// Testing code for online compiler 2023-07-08T23:15:33
