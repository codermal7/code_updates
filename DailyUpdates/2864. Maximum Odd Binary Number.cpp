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
