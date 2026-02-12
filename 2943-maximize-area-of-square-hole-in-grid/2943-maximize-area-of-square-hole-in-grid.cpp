class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int maxConhBars = 1, maxConvBars = 1;

        int currConhBars = 1;
        for(int i=1 ; i<hBars.size() ; i++){
            if(hBars[i]-hBars[i-1]==1) {
                currConhBars++;
            } else {
                currConhBars = 1;
            }
            maxConhBars = max(currConhBars, maxConhBars);
        }

        int currConvBars = 1;
        for(int i=1 ; i<vBars.size() ; i++){
            if(vBars[i]-vBars[i-1]==1) {
                currConvBars++;
            }
            else {
                currConvBars = 1;
            }
            maxConvBars = max(currConvBars, maxConvBars);
        }

        int side = min(maxConhBars,maxConvBars)+1;
        return side*side;

    }
};