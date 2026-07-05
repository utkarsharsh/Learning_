class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int intial=s.size()-1;
        while(s[intial]==' ') intial--;

        while(intial>=0 && s[intial]!=' '){
            intial--;
            ans++;
        }
        return ans;
        


    }
};