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
};
// Automated comment added on 2024-09-22
// Automated comment added on 2024-09-23
// Automated comment added on 2024-09-24
// Automated comment added on 2024-09-25
// Automated comment added on 2024-09-22T22:47:21
// Automated comment added on 2024-09-23T22:47:21
// Automated comment added on 2024-09-24T22:47:21
// Automated comment added on 2024-09-25T22:47:21
// Automated comment added on 2024-09-26T22:47:21
