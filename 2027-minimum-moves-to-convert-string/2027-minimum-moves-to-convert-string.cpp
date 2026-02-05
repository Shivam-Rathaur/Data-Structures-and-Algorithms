class Solution {
public:
    int minimumMoves(string s) {
        int i = 0, ct = 0;
        while(i<s.size()){
            if(s[i]=='X'){
                ct++;
                i += 3;
            } 
            else i++;
        }
        return ct;
    }
};