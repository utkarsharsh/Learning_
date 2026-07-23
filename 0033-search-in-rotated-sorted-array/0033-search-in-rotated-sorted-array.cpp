class Solution {
public:
    int search(vector<int>& nums, int target) {
    int l =0;
    int r= nums.size()-1;
    while(l<=r){
     int mid=((r-l)/2)+l;
     if(nums[mid]>=nums[l])
     {
        if(target>=nums[l] && target<=nums[mid]){
        int nl=l;
         int nr=mid;
         while(nl<=nr){
            int nm= ((nr-nl)/2)+nl;
            if(nums[nm]==target) return nm;
            if(target>nums[nm]){
            nl=nm+1;
            }
            else{
            nr=nm-1;
            }
         }
         return -1;
        }
        else{
           l=mid+1; 
        }

     }
     else{

     if(target<=nums[r] && target>=nums[mid]){
       
       int nl=mid;
         int nr=r;
         while(nl<=nr){
            int nm= ((nr-nl)/2)+nl;
            if(nums[nm]==target) return nm;
            if(target>nums[nm]){
            nl=nm+1;
            }
            else{
            nr=nm-1;
            }
         }
         return -1;

        }
        else{
           r=mid-1; 
        }
     }
    }  
    return -1;


    }
};