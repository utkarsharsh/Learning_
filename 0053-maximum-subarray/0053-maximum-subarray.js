/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let ans=0;
    let maxans=0;
    let c=0;

    for(let i=0;i<nums.length;i++){
        if(nums[i]>=0)c++;
        maxans+=nums[i];
        if(maxans<0) maxans=0;
        ans=Math.max(maxans,ans);
    }
    if(c>0)
    return ans;

    let myans=nums[0];
     for(let i=0;i<nums.length;i++){
        
        myans=Math.max(nums[i],myans);
    }
    return myans;

};