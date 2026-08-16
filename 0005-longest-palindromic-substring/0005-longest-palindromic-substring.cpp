class Solution {
public:
int solve(string &s1,int i,int j,vector<vector<int>>&dp){
    
    if(i>=j) return 1;
    if(s1[i]!=s1[j]) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    return dp[i][j]= solve(s1,i+1,j-1,dp);
}
    string longestPalindrome(string s1) {
         
        
        vector<vector<int>>dp(s1.size()+1,vector<int>(s1.size()+1,-1));
        int a=0;
        int l=-1;
        int r=-1;
        for(int i=0;i<s1.size();i++)
        {
            for(int j=i;j<s1.size();j++)
            {
               if(solve(s1,i,j,dp)){
               if(a<=(abs(j-i)+1)){
               a=(abs(j-i)+1);
                l=i;
                r=j;
               }
               }
            }
        }

          string k="";
        for(int i=l;i<=r;i++){
         k+=s1[i];
        }
        return k;
       


     

    }
};