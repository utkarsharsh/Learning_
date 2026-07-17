class Solution {
public:
    int minOperations(string s) {
        int one=0;
        int zero=0;

        for(int i=0;i<s.size();i++){
            if(i%2==0 && s[i]!='1'){
              one++;
            }
            if(i%2!=0 && s[i]!='0'){
              one++;
            }
        }

         for(int i=0;i<s.size();i++){
            if(i%2==0 && s[i]!='0'){
              zero++;
            }
            if(i%2!=0 && s[i]!='1'){
              zero++;
            }
        }

        return min(one,zero);
    }
};