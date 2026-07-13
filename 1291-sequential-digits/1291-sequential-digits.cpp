class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       long long int x=1;
        //  vector<vector<int>>ans;
         long long int start=12;
         long long int mul=11;
         vector<long long int>v;
        while(x){
            long long int y=start;
            
            while(y%10!=9){
                v.push_back(y);
                y+=mul;
            }
            v.push_back(y);
            if(y>=123456789) break;
            start=start*10+(start%10+1);
            mul=mul*10+1;
        }
        vector<int>ans;
        for(int i=0;i<v.size();i++) {
        if(low<=v[i] && high>=v[i]) ans.push_back(v[i]);
        }

        return ans;



    }
};