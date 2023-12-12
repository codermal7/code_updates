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
// Testing code for online compiler 2023-07-09T23:15:33
// Testing code for online compiler 2023-07-10T23:15:33
// Testing code for online compiler 2023-07-11T23:15:33
// Testing code for online compiler 2023-07-12T23:15:33
// Testing code for online compiler 2023-07-13T23:15:33
// Testing code for online compiler 2023-07-14T23:15:34
// Testing code for online compiler 2023-07-15T23:15:34
// Testing code for online compiler 2023-07-16T23:15:34
// Testing code for online compiler 2023-07-17T23:15:34
// Testing code for online compiler 2023-07-18T23:15:34
// Testing code for online compiler 2023-07-19T23:15:34
// Testing code for online compiler 2023-07-20T23:15:34
// Testing code for online compiler 2023-07-21T23:15:34
// Testing code for online compiler 2023-07-22T23:15:34
// Testing code for online compiler 2023-07-23T23:15:34
// Testing code for online compiler 2023-07-24T23:15:34
// Testing code for online compiler 2023-07-25T23:15:34
// Testing code for online compiler 2023-07-26T23:15:34
// Testing code for online compiler 2023-07-27T23:15:34
// Testing code for online compiler 2023-07-28T23:15:34
// Testing code for online compiler 2023-07-29T23:15:34
// Testing code for online compiler 2023-07-30T23:15:34
// Testing code for online compiler 2023-07-31T23:15:34
// Testing code for online compiler 2023-10-01T23:16:50
// Testing code for online compiler 2023-10-02T23:16:50
// Testing code for online compiler 2023-10-03T23:16:50
// Testing code for online compiler 2023-10-04T23:16:50
// Testing code for online compiler 2023-10-05T23:16:50
// Testing code for online compiler 2023-10-06T23:16:50
// Testing code for online compiler 2023-10-07T23:16:50
// Testing code for online compiler 2023-10-08T23:16:50
// Testing code for online compiler 2023-10-09T23:16:50
// Testing code for online compiler 2023-10-10T23:16:50
// Testing code for online compiler 2023-10-11T23:16:50
// Testing code for online compiler 2023-10-12T23:16:51
// Testing code for online compiler 2023-10-13T23:16:51
// Testing code for online compiler 2023-10-14T23:16:51
// Testing code for online compiler 2023-10-15T23:16:51
// Testing code for online compiler 2023-10-16T23:16:51
// Testing code for online compiler 2023-01-01T23:17:36
// Testing code for online compiler 2023-01-02T23:17:36
// Testing code for online compiler 2023-01-03T23:17:36
// Testing code for online compiler 2023-01-04T23:17:36
// Testing code for online compiler 2023-01-05T23:17:36
// Testing code for online compiler 2023-01-06T23:17:36
// Testing code for online compiler 2023-01-07T23:17:36
// Testing code for online compiler 2023-01-08T23:17:36
// Testing code for online compiler 2023-01-09T23:17:36
// Testing code for online compiler 2023-01-10T23:17:36
// Testing code for online compiler 2023-01-11T23:17:36
// Testing code for online compiler 2023-01-12T23:17:36
// Testing code for online compiler 2023-01-13T23:17:37
// Testing code for online compiler 2023-01-14T23:17:37
// Testing code for online compiler 2023-01-15T23:17:37
// Testing code for online compiler 2023-01-16T23:17:37
// Testing code for online compiler 2023-01-17T23:17:37
// Testing code for online compiler 2023-12-17T23:18:13
// Testing code for online compiler 2023-12-18T23:18:13
// Testing code for online compiler 2023-12-19T23:18:13
// Testing code for online compiler 2023-12-20T23:18:13
// Testing code for online compiler 2023-12-21T23:18:13
// Testing code for online compiler 2023-12-22T23:18:13
// Testing code for online compiler 2023-12-23T23:18:13
// Testing code for online compiler 2023-12-24T23:18:13
// Testing code for online compiler 2023-12-25T23:18:13
// Testing code for online compiler 2023-12-26T23:18:13
// Testing code for online compiler 2023-12-27T23:18:14
// Testing code for online compiler 2023-12-28T23:18:14
// Testing code for online compiler 2023-12-29T23:18:14
// Testing code for online compiler 2023-12-30T23:18:14
// Testing code for online compiler 2023-12-17T23:18:18
// Testing code for online compiler 2023-12-18T23:18:18
// Testing code for online compiler 2023-12-19T23:18:18
// Testing code for online compiler 2023-12-20T23:18:18
// Testing code for online compiler 2023-12-21T23:18:18
// Testing code for online compiler 2023-12-22T23:18:18
// Testing code for online compiler 2023-12-23T23:18:18
// Testing code for online compiler 2023-12-24T23:18:18
// Testing code for online compiler 2023-12-25T23:18:18
// Testing code for online compiler 2023-12-26T23:18:18
// Testing code for online compiler 2023-12-27T23:18:18
// Testing code for online compiler 2023-12-28T23:18:18
// Testing code for online compiler 2023-12-29T23:18:18
// Testing code for online compiler 2023-12-30T23:18:18
// Testing code for online compiler 2023-12-12T23:18:50
// Testing code for online compiler 2023-12-13T23:18:50
// Testing code for online compiler 2023-12-14T23:18:50
// Testing code for online compiler 2023-12-12T23:18:52
// Testing code for online compiler 2023-12-13T23:18:52
// Testing code for online compiler 2023-12-14T23:18:52
// Testing code for online compiler 2023-12-12T23:18:54
// Testing code for online compiler 2023-12-13T23:18:54
// Testing code for online compiler 2023-12-14T23:18:54
// Testing code for online compiler 2023-12-12T23:18:56
// Testing code for online compiler 2023-12-13T23:18:57
// Testing code for online compiler 2023-12-14T23:18:57
// Testing code for online compiler 2023-12-12T23:19:10
// Testing code for online compiler 2023-12-13T23:19:10
// Testing code for online compiler 2023-12-14T23:19:10
// Testing code for online compiler 2023-12-12T23:19:12
// Testing code for online compiler 2023-12-13T23:19:12
// Testing code for online compiler 2023-12-14T23:19:12
// Testing code for online compiler 2023-12-12T23:19:15
// Testing code for online compiler 2023-12-13T23:19:15
// Testing code for online compiler 2023-12-14T23:19:15
// Testing code for online compiler 2023-12-12T23:19:17
// Testing code for online compiler 2023-12-13T23:19:17
// Testing code for online compiler 2023-12-14T23:19:17
// Testing code for online compiler 2023-12-12T23:19:20
