class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){
            return "";  
        } 
        string size = strs.at(0);
        for(int counter = 0; counter < strs.size(); counter++) {
            while(strs.at(counter).find(size) != 0){
                size.pop_back();
                continue;
            }
        }
        return size;
        
    }
};
