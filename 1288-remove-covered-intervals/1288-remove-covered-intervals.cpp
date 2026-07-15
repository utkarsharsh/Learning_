class Solution {
public: 
static bool mysort (vector<int>& a, const vector<int>& b){
    if(a[0]==b[0]) return a[1]>b[1];
    return a[0]<b[0];
    
}
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),mysort);
        int last=-1;
        int ans=0;
        for(int i =0;i<intervals.size();i++){
            int first=intervals[i][0];
            int second=intervals[i][1];
            cout<<first<<" "<<second<<endl;
            if(second>last){
                ans++;
                last=second;
            }

        }

        return ans;
        
        }
};