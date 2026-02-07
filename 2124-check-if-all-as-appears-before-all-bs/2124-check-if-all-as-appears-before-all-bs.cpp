class Solution {
public:
    bool checkString(string s) {
        int i = 0;
        while(i < s.size()){
            if(s[i] == 'b') break;
            else i++;
        }
        while(i < s.size()){
            if(s[i] == 'a') return false;
            else i++;
        }
        return true;
    }
};