class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        map<char,char>m;
        m[')']='(';
        m['}']='{';
        m[']']='[';
         if(s[0]==')' || s[0]=='}' || s[0]==']') return false;
       
         for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);

            }
            else{
                if( st.empty() || m[s[i]]!=st.top()){
                 return false;
                }
                st.pop();
            }
         }
         if(st.size()>0) return false;
         return true;




    }
};