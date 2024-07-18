class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('|| s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }

            else{
                if(!st.empty()){
                    char top=st.top();
                    if((s[i]==')' && top=='(') || (s[i]=='}' && top=='{')||
                    (s[i]==']' && top=='[')){
                         st.pop();
                    }
                    else{
                        return false;
                    }
                }

                else{
                   //stack is empty
                    return false;
                }
            }
        }

        return st.empty();

        
    }
};
