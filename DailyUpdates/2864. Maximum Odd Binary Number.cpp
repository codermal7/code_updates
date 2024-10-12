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
