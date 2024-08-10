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
};// Testing code for online compiler 2024-09-27T22:51:00
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
