class Solution {
public:
    int maxNumberOfBalloons(string text) {
        
        int ans=INT_MAX;
        string x="balloon";
        vector<int>v(27,0);

        for(int i=0;i<text.size();i++){
            v[text[i]-'a']++;
        }
        v['l'-'a']/=2;
         v['o'-'a']/=2;
        for(int i=0;i<x.size();i++){
            ans=min(ans,v[x[i]-'a']);
        }

        return ans;


    }
};