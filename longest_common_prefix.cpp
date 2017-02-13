class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() < 1){
            return string();
        }
        if(strs.size() == 1){
            return strs[0];
        }
        std::sort(strs.begin(), strs.end());
        if(strs[0].length() == 0){
            return string();
        }

        int index = 0;
        while(strs[0][index] == strs[strs.size()-1][index]){
            index++;
        }
        return strs[0].substr(0,index);
    }
};