class Solution {
public:
    long long gcdSum(vector<int>& nums) {
     long long ans=0;
     int mx=0;
      int gcd=0;
        vector<int>g;
        for(int i=0;i<nums.size();i++)
        {
            mx=max(nums[i],mx);
            g.push_back(__gcd(mx,nums[i]));
        }
        sort(g.begin(),g.end());

        int l=0,r=g.size()-1;
        while(l<r){
            ans+=__gcd(g[l],g[r]);
            l++;r--;
        }
          
          return ans;


    }
};