class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char>ans;
        for(char c: sentence){
            ans.insert(c);
        }
        if(ans.size()==26){
            return true;
        }else{
            return false;
        }
    }
};