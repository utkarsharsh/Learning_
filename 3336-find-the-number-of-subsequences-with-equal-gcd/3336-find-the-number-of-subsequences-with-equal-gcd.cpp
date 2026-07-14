class Solution {
public:
long long int mod = 1e9+7;
 int seq(vector<int>& nums,int a,int b,int i,vector<vector<vector<int>>>&dp){
    
     if(i==nums.size()) {
        if(a==b) return 1;
        return 0;
     }
     if(dp[i][a][b]!=-1) return dp[i][a][b]%mod;
     return dp[i][a][b]= ((seq(nums,__gcd(a,nums[i]),b,i+1,dp)%mod+ seq(nums,a,__gcd(b,nums[i]),i+1,dp)%mod)%mod +
      seq(nums,a,b,i+1,dp)%mod)%mod;
 }

      
    int subsequencePairCount(vector<int>& nums) {
    vector<vector<vector<int>>>dp(nums.size()+1,vector<vector<int>>(500,vector<int>(500,-1)));
      return   (seq(nums,0,0,0,dp)-1)%mod;

    }
};