class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>m;
        
         vector<int>b=arr;
         sort(b.begin(),b.end());
        int rank=1;
        for(int i=0;i<b.size();i++){
         if(m.find(b[i])==m.end()){
            m[b[i]]=rank;
            cout<<b[i]<<" ";
           rank++;
         }
           
        }
            vector<int>ans;
         for(int i=0;i<arr.size();i++){
        ans.push_back(m[arr[i]]);
        }
        return ans;

    }
};