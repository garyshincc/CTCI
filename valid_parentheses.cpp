class Solution {
public:
    bool isValid(string s) {
        stack<char> openers;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                openers.push(s[i]);
            }
            else if(openers.size() == 0){
                return false;
            }
            else{
                char next = openers.top();
                openers.pop();
                if(s[i] == ')' && next != '('){
                    return false;
                }
                if(s[i] == ']' && next != '['){
                    return false;
                }
                if(s[i] == '}' && next != '{'){
                    return false;
                }
            }
        }
        if (openers.size() != 0){
            return false;
        }
        return true;
    }
};