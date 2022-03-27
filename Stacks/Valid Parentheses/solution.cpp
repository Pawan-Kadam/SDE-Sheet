// LeetCode - 20. Valid Parentheses
// Link - https://leetcode.com/problems/valid-parentheses/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char x;
        
        for(int i = 0; i < s.length(); ++i){
            if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')){
                st.push(s[i]);
            }
            else if ((s[i] == ']') || (s[i] == ')') || (s[i] == '}')){
                if (st.empty()){
                    return false;
                }
                else{
                    x = st.top();
                    st.pop();
                    
                    if (x == '('){
                        if ((s[i] == '}') || (s[i] == ']')){
                            return false;
                        }
                    }
                    else if (x == '['){
                        if ((s[i] == '}') || (s[i] == ')')){
                            return false;
                        }
                    }
                    else if (x == '{'){
                        if ((s[i] == ']') || (s[i] == ')')){
                            return false;
                        }
                    }
                }
            }
        }
        if (!st.empty()){
            return false;
        }
        
        return true;
    }
};
