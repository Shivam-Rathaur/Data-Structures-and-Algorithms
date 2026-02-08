class Solution {
public:
    bool isBalanced(string num) {
        int evenSum = 0, oddSum = 0;
        for(int i=0 ; i<num.size() ; i++){
            if(i%2==0){ //even indices
                evenSum += num[i] - '0';
            } else{ //odd indices
                oddSum += num[i] - '0';
            }
        }
        return evenSum == oddSum;
    }
};