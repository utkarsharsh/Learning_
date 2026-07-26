class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    int c=0;
    sort(nums.begin(),nums.end());
    vector<int>neg;
    vector<int>pos;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
        c++;
        pos.push_back(nums[i]);
        }
        else{
            neg.push_back(-1*nums[i]);
        }
    }
     sort(pos.begin(),pos.end());
      sort(neg.begin(),neg.end());

    if(c==0){
      int ans= nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
      return ans;
    }

    int l=pos.size()-1;
    int r=neg.size()-1;
    int nc=0;
    int ans=1;
    int twoneg=0;int twopos=0;int threepos=0;
    
    if(neg.size()>=2 && pos.size()>=1)
    twoneg=neg[r]*neg[r-1]*pos[l];

     if(neg.size()>=0 && pos.size()>=3)
    threepos=pos[l-2]*pos[l-1]*pos[l];


    return max({twoneg,twopos,threepos});
    





    }
};