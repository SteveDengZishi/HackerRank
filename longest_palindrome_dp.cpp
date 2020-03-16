#define FOR(i,a,b) for(int i=a;i<b;i++)
class Solution {
public:
    
    string longestPalindrome(string s) {
        
        //corner case handle
        //c++ cannot init with 0 size
        int len = s.size();
        if(len==0) return "";
        
        int state[len][len];
        
        //init for c++ array is necessary, memset if faster
        memset(state, 0, sizeof(state));
        
        //building base cases for single and double case
        // e.g 'a'
        for(int i=0;i<len;i++){
            state[i][i] = 1;
        }
        
        // e.g 'bb'
        for(int i=1;i<len;i++){
            if(s[i]==s[i-1]){
                state[i-1][i] = 1;
            }
        }
        
        //pupulate state transition
        //start from length 3, since i+1, j-1 return to base case
        FOR(diff,2,len){
            FOR(i,0,len){
                int j = i+diff;
                if(j<len) state[i][j] = (state[i+1][j-1] && s[i]==s[j]);
            }
        }
        
        //find max
        int maxLen = 0;
        string res = "";
        FOR(i,0,len){
            FOR(j,i,len){
                int resL = j-i+1;
                if(state[i][j] && resL>maxLen){
                    res = s.substr(i,resL);
                    maxLen=resL;
                }
            }
        }
        return res;
    }
};
