class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>m;

        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        string ans="";
        char x=' ';
        for(auto i:m){
            if(i.second%2!=0) x=i.first;
            int r=i.second/2;
            for(int j=0;j<r;j++){
                ans+=i.first;
            }
        }

        string total=ans;
        if(x!=' ')
        total+=x;

        reverse(ans.begin(),ans.end());
        total+=ans;
        




        return total;

    }
};