class Solution {
public:
    string maximumOddBinaryNumber(string s) {

        // 1st code

        // string ans = "";
        // int freq= -1;

        // for(auto ch: s)
        // { 
        //     if(ch=='1')
        //     freq += 1;
        //     else
        //     freq=0; 
        // }
        // for(int i = 0; i < s.size(); i++)
        // {
        //     if(freq>0)
        //     ans+='1';
        //     else
        //     ans+='0';
        //     freq--;
        // }
        // ans.pop_back();
        // return ans + '1';

        // 2nd code

        string ans = "";
        int oneCount= -1;
        for(auto c: s){ oneCount += (c == '1')?1:0; }
        for(int i = 0; i < s.size(); ++i, --oneCount){
            ans +=  (oneCount > 0)?'1':'0';
        }
        ans.pop_back();
        return ans + '1';
    }
};// Changed code 1
// Changed code 1
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
