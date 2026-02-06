class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int w = min(rec2[2],rec1[2]) - max(rec2[0],rec1[0]);
        int h = min(rec2[3],rec1[3]) - max(rec2[1],rec1[1]);
        if(w<=0 || h<=0) {
            return false;
        }
        return true;
    }
};